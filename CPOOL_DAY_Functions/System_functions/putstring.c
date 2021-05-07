/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** display string
*/

#include <unistd.h>

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    return 0;
}
