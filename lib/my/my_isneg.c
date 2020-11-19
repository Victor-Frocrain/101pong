/*
** EPITECH PROJECT, 2018
** my_isneg.c
** File description:
** Displays if it's negative
*/

#include <unistd.h>

void my_putchar1(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    if (n < 0)
        my_putchar1('N');
    else if (n >= 0)
        my_putchar1('P');
    return (0);
}
