/*
** EPITECH PROJECT, 2018
** my_showstr
** File description:
** my_showstr
*/

#include <unistd.h>

void display_char(int i)
{
    char c = i + '0';
    char d = i % 10 + 'a';

    if (i <= 9)
        write(1, &c, 1);
    else
        write(1, &d, 1);
}

char *char_to_str(char c)
{
    int a = c;
    int i = 1;

    while (a / i >= 16)
        i = i * 16;
    display_char(i / 10);
    display_char(a);
}

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= ' ' && str[i] <= '~')
            write(1, &str[i], 1);
        else {
            write(1, "\\", 1);
            char_to_str(str[i]);
        }
    }
    return (0);
}
