/*
** EPITECH PROJECT, 2021
** kebab_case
** File description:
** main
*/

#include "../include/kebab.h"

int main(int ac, char **av)
{
    int u = check_error(ac, av);
    char *str;

    if (u == 84)
        return (84);
    if (u == 0)
        return (0);
    str = av[1];
    kebab_case(str);
}
