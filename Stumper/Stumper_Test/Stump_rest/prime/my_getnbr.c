/*
** EPITECH PROJECT, 2020
** getnbr
** File description:
** my_getnbr
*/

#include "../include/my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int m = 1;

    while ( str[i] == '-' || str [i] == '+' ){
        if ( str[i] == '-') {
            m = m * -1;
        }
        i++;
    }
    while ( str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
        nb = nb + str[i] -48;
        i++;
    }
    return (nb * m);
}
