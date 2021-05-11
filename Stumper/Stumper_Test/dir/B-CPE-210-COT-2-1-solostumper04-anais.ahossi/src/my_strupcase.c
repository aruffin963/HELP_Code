/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** puts every letter of every word in it in uppercase
*/
#include "../include/my.h"

char *my_strupcase(char *str, int i)
{
    if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
        str[i + 1] = str[i + 1] - 32;
}
