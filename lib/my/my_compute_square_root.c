/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** compute the square root
*/

float my_compute_square_root(float nb)
{
    float i = (1 + nb) / 2;
    float j = 1;
    float comp = 0;
    float rec = i;

    while (rec > comp) {
        rec = i;
        i = (i + nb / i) / 2;
        comp = i;
    }
    if (i * i != nb)
        return (0);
    return (i);
}
