/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** check if the numbers are primes
*/

int my_is_prime(int nb)
{
    int i = 2;
    int j = 2;

    if (nb <= 1)
        return (0);
    while (i <= nb) {
        j = nb / i;
        if (j * i == nb && j != 1)
            return (0);
        i++;
    }
    return (1);
}
