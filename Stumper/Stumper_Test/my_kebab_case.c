/*
** EPITECH PROJECT, 2021
** kebab_case.c
** File description:
** function
*/

#include "../include/kebab.h"

char **kebab_case(char *str)
{
    int i, j;

    for (i = 0; is_valid(str[i]) == 0; i++);
    for (j = strlen(str) - 1; is_valid(str[j]) == 0; j--);
    str[j + 1] = '\0';
    for (; str[i] != '\0'; i++) {
        if (is_valid(str[i]) == 0) {
            str[i] = '-';
            write(1, &str[i], 1);
            for (; is_valid(str[i]) == 0; i++);
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (i != 0 && str[i] >= '0' && str[i] <= '9' && str[i - 1] >= 'a' && \
            str[i - 1] <= 'z')
            write(1, "-", 1);
        write(1, &str[i], 1);
        if (i != strlen(str) - 1 && str[i] >= '0' && str[i] <= '9' && \
            str[i + 1] >= 'a' && str[i + 1] <= 'z')
            write(1, "-", 1);
    }
    write(1, "\n", 1);
}
