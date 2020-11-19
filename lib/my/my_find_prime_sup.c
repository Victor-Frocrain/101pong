/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** find the first prime after the parameter
*/

int my_find_prime_sup(int nb)
{
    int i = 2;
    int j = 2;
    int result = nb;

    if (nb <= 1)
        return (2);
    while (i <= result) {
        j = result / i;
        if (j * i == result && j != 1) {
            result++;
            i = 2;
        }
        else
            i++;
    }
    return (result);
}
