/*
** EPITECH PROJECT, 2018
** my_strlowcase
** File description:
** my_strlowcase
*/

int my_count_string2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strlowcase(char *str)
{
    int i = 0;
    char modify[my_count_string2(str)];

    while (i < my_count_string2(str)) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            modify[i] = str[i] + 32;
        else
            modify[i] = str[i];
        i++;
    }
    str = modify;
    return (str);
}
