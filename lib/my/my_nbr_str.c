/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include "my.h"

char *my_nbr_str2(char *str, int nb, int j, int multiplier)
{
    if (nb < 10) {
        str[j] = nb + 48;
        str[j + 1] = 0;
        return (str);
    }
    for (j; multiplier >= 1; j++) {
        str[j] = (nb / multiplier) + 48;
        nb %= multiplier;
        multiplier /= 10;
    }
    str[j] = 0;
    return (str);
}

char *my_nbr_str(int nb)
{
    int j = 0;
    int op = 0;
    char *str;
    int multiplier = 1;

    if (nb < 0) {
        op = 1;
        nb *= -1;
    }
    for (j; nb / multiplier > 0; j++)
        multiplier *= 10;
    multiplier /= 10;
    str = malloc(sizeof(*str) * (j + op));
    j = 0;
    if (op == 1) {
        str[j] = '-';
        j++;
    }
    return (my_nbr_str2(str , nb , j , multiplier));
}

