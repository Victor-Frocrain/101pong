/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** my_strcapitalize
*/

int my_count_string3(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    char modify[my_count_string3(str)];

    while (i < my_count_string3(str)) {
        if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' '))
            modify[i] = str[i] - 32;
        else
            modify[i] = str[i];
        i++;
    }
    str = modify;
    return (str);
}
