/*
** EPITECH PROJECT, 2018
** FrenchNameFormatter
** File description:
** french
*/

#include "../include/my.h"

void french_name(char *str)
{
    int i = 0;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    for (; str[i + 1] != ' ' && str[i] != '\0'; i++) {
        if (str[i] != '-')
            my_strlowcase(str, i);
        else if(str[i] == '-')
            my_strupcase(str, i);
        write(1, &str[i], 1);
    }
    for (; str[i] != '\0'; i++) {
        if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            str[i + 1] = str[i + 1] - 32;
        write(1, &str[i], 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac < 2) {
        write(2, "Usage: frenchNameFormatter string\n", 35);
        return (84);
    }
    else if (ac > 2)
        return (84);
    french_name(av[1]);
    return (0);
}
