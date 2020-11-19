/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** find the first occurence
*/

int my_count_string(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int start = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[0])
            start = i;
        if (str[i] == to_find[j])
            j++;
        else if (str[i + 1] != to_find[j])
            j = 0;
        i++;
    }
    if (to_find[j] != '\0')
        start = 0;
    return (str + start);
}
