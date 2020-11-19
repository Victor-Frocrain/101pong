/*
** EPITECH PROJECT, 2018
** compute_speeds
** File description:
** compute_speeds
*/

#include "my.h"

void compute_speed_at_time(base *now, base *speed, int n)
{
    speed->x = n * speed->x + now->x;
    speed->y = n * speed->y + now->y;
    speed->z = n * speed->z + now->z;
}

base *compute_speed(base *or, base *now, base *speed)
{
    speed->x = now->x - or->x;
    speed->y = now->y - or->y;
    speed->z = now->z - or->z;
    return (speed);
}
