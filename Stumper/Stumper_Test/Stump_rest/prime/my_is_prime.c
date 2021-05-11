/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** cheick  all the prime number
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_str_isnum(char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return (84);
        else
            i++;
    }
    return (0);
}

long long my_getnbr(char const *str)
{
    long long i = 0;
    long long nb = 0;
    long long m = 1;

    while ( str[i] == '-' || str [i] == '+' ){
        if ( str[i] == '-') {
            m = m * -1;
        }
        i++;
    }
    while ( str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
        nb = nb + str[i] - 48;
        i++;
    }
    return (nb * m);
}

unsigned int my_is_prime(unsigned int nb)
{
    if (nb <= 1) return (0);
    else
        for (int i = 2; i <= nb / i; i++)
            if (nb % i == 0) return (0);
    return (1);
}

void generator(unsigned int u, unsigned int v)
{
    if (u < v)
        for (unsigned int i = u; i <= v; i++)
            if (my_is_prime(i) == 1) printf("%d\n", i);
    else if (u > v)
        for (unsigned int i = u; i >= v; i--)
            if (my_is_prime(i) == 1) printf("%d\n", i);
}

int main(int ac, char **av)
{
    int x = 0, y = 0;
    int i = 0, j = 0;

    if (ac == 3) {
        x = my_getnbr(av[1]);
        y = my_getnbr(av[2]);
        i = my_str_isnum(av[1]);
        j = my_str_isnum(av[2]);
        if (i == 84 || j == 84) return (84);
        if (my_getnbr(av[1]) > 2147483647 || my_getnbr(av[1]) < 0) return 84;
        if (my_getnbr(av[2]) > 2147483647 || my_getnbr(av[2]) < 0) return 84;
        if (my_getnbr(av[1]) == 0 || my_getnbr(av[2]) == 0) return 84;
        else
            generator(x, y);
        return (0);
    } else return 84;
}