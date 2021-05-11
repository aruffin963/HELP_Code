/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** puts every letter of every word in it in lowercase.
*/
#include "../include/my.h"

char *my_strlowcase(char *str, int i)
{
        if (str[i + 1] >= 65 && str[i + 1] <= 90)
            str[i + 1] = str[i + 1] + 32;
}
