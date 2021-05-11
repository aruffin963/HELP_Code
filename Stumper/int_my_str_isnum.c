/*
** EPITECH PROJECT, 2020
**  c project
** File description:
** mystrisnum
*/

#include "../include/my.h"

int my_str_isnum(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ((str >= "0" && str <= "177") && str[i] != '-' && str[i] != '.')
            exit (84);
        else
            i++;
    }
    return (0);
}
