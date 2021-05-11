/*
** EPITECH PROJECT, 2020
** fibonacci_checker.c
** File description:
** fibonacci_checker.c
*/

#include <stdlib.h>
#include <stdio.h>

int my_str_isnum(char *str)
{
    int i = 0;
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

int recup_int(int argc, char **argv)
{
    int tab[argc];

    for (int i = 1; i < argc; i++)
        tab[i] = my_getnbr(argv[i]);
    for (int j = 1; j < (argc - 2); j++){
        if (tab[j] + tab[j + 1] != tab[j + 2])
        {
            write(1, "Not a Fibonacci sequence\n", 25);
            return (0);
        }
    }
    write(1, "OK\n", 3);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return 84;
    if (recup_int(argc, argv) == 1)
        return 1;
    return 0;
}
