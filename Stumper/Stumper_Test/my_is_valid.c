/*
** EPITECH PROJECT, 2021
** kebab_case
** File description:
** stumper 7
*/

#include "../include/kebab.h"

int is_valid(char str)
{
    if (str >= 'a' && str <= 'z' || str >= 'A' && \
        str <= 'Z' || str >= '0' && str <= '9')
        return (1);
    else
        return (0);
}
