/*
** EPITECH PROJECT, 2021
** keba_case
** File description:
** stumper 7
*/

#include "../include/kebab.h"

int check_error(int ac, char **av)
{
    int i = 0;

    if (ac != 2)
        return (84);
    if (strlen(av[1]) == 0) {
        write(1, "\n", 1);
        return (0);
    }
}
