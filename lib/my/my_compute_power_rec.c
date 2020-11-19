/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** The Power function
*/

int my_compute_power_rec(int nb, int p)
{
    int i = nb;

    if (p > 0) {
        nb = nb * my_compute_power_rec(i, p - 1);
        if (nb >= 1000000000)
            return (0);
        return (nb);
    }
    else if (p == 0)
        return (1);
    else
        return (0);
}
