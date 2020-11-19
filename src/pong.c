/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** 101pong
*/

#include "my.h"

base *init_coordinates(base *or, char **av, int i)
{
    or = malloc(sizeof(base) * 2);
    or->x = strtof(av[i], NULL);
    or->y = strtof(av[i + 1], NULL);
    or->z = strtof(av[i + 2], NULL);
    return (or);
}

void compute_angle(base *or, base *now, base *speed)
{
    float angle;
    float deep = now->x - or->x;
    float opo = now->y - or->y;
    float adj = now->z - or->z;
    float hypo = sqrtf(deep * deep + adj * adj + opo * opo);

    if (hypo != 0.000000)
        angle = (180 * acosf(adj / hypo)) / NB_PI - 90;
    else
        angle = 90;
    if (angle < 0)
        angle *= -1;
    if (or->z == 0)
        angle = 0;
    printf("The incidence angle is:\n%.2f degrees\n", angle);
}

void check_cases(base *or, base *now, base *speed)
{
    if ((or->z > 0 && now->z < 0) || (or->z < 0 && now->z > 0) ||
        (or->z > 0 && now->z >= or->z) || (or->z < 0 && now->z <= or->z))
        printf("The ball won't reach the bat.\n");
    else
        compute_angle(or, now, speed);
}

int pong(char **av)
{
    base *or = init_coordinates(or, av, 1);
    base *now = init_coordinates(now, av, 4);
    base *speed = malloc(sizeof(base) * 2);
    int n = atoi(av[7]);

    if (n < 0)
        return (84);
    speed = compute_speed(or, now, speed);
    printf("The velocity vector of the ball is:\n(%.2f, %.2f, %.2f)\n",
    speed->x, speed->y, speed->z);
    compute_speed_at_time(now, speed, n);
    printf("At time t + %d, ball coordinates will be:\n(%.2f, %.2f, %.2f)\n",
    n, speed->x, speed->y, speed->z);
    check_cases(or, now, speed);
    return (0);
}
