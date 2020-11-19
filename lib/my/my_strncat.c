/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** my_strncat
*/

int my_str_count1(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int length = my_str_count1(dest) + nb;
    int i = 0;
    char str[length];

    while (i < my_str_count1(dest)) {
        str[i] = dest[i];
        i++;
    }
    for (int j = 0; j < nb && src[j] != '\0'; j++) {
        str[i] = src[j];
        i++;
    }
    str[i] = '\0';
    dest = str;
    return (dest);
}
