/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"

void read_help(void)
{
    int fd = open("help", O_RDONLY);
    char *buff = malloc(sizeof(char) * 500);

    if (buff == NULL)
        exit(MY_EXIT_SUCCESS);
    memset(buff, 0, 500);
    read(fd, buff, 500);
    printf("%s\n", buff);
    free(buff);
    close(fd);
}

int check_chars(char *str)
{
    int i = 0;

    for (i = 0; str[i]; i++) {
        if (str[i] != '.' && str[i] != '-' && (str[i] < '0' || str[i] > '9'))
            return (84);
        else if ((str[i] == '.' || str[i] == '-') && !str[i + 1])
            return (84);
        else if ((str[i] == '.' || str[i] == '-') && str[i + 1] &&
                 (str[i + 1] < '0' || str[i + 1] > '9'))
            return (84);
    }
    if (i == 0)
        return (84);
    return (0);
}

bool parse_errors(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        read_help();
        return (true);
    }
    else if (ac != 8)
        return (true);
    for (int i = 1; av[i]; i++)
        if (check_chars(av[i]) == 84)
            return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (parse_errors(ac, av))
        return (MY_EXIT_ERROR);
    if (pong(av) == 84)
        return (MY_EXIT_ERROR);
    return (MY_EXIT_SUCCESS);
}
