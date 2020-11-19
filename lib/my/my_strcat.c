/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** concatenates two strings
*/

int my_str_count(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int length = my_str_count(dest) + my_str_count(src);
    int i = 0;
    char str[length];

    while (i < my_str_count(dest)) {
        str[i] = dest[i];
        i++;
    }
    for (int j = 0; src[j] != '\0'; j++) {
        str[i] = src[j];
        i++;
    }
    str[i] = '\0';
    dest = str;
    return (dest);
}
