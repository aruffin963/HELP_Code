/*
** EPITECH PROJECT, 2021
** FrenchNameFormatter
** File description:
**
*/

#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

void put_upp(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
}

void str_change(char *str)
{
    int i;

    i = 0;
    while (str[i] != ' ') {
        put_upp(str);
        if (str[i + 1] >= 'A' && str[i + 1] <= 'Z' && str[i + 1] != '-') {
            str[i + 1] = str[i + 1] + 32;
        }
        if(str[i + 1] == '-' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            str[i + 1] = str[i + 1] - 32;
        my_printf("%c", str[i]);
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        my_printf("%c", str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Usage: frenchNameFormatter string\n", 35);
        return (84);
    }
    str_change(av[1]);
    return (0);
}
