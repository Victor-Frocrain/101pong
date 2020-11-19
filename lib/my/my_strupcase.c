/*
** EPITECH PROJECT, 2018
** my_strupcase
** File description:
** my_strupcase
*/

int my_count_string1(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strupcase(char *str)
{
    int i = 0;
    char modify[my_count_string1(str)];

    while (i < my_count_string1(str)) {
        if (str[i] >= 'a' && str[i] <= 'z')
            modify[i] = str[i] - 32;
        else
            modify[i] = str[i];
        i++;
    }
    str = modify;
    return (str);
}
