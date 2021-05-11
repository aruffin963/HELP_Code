/*
** EPITECH PROJECT, 2021
** tab
** File description:
** tab
*/

#include "../include/my.h"

char **my_str_to_wordtab(char *str, char c)
{
    int i = 0;
    int j = 0;
    char cc = c;
    char **tab = malloc((word_count(str, c) + 1) * sizeof(tab));

    while (str[i] != '\0') {
        if ((cc == c) && (str[i] != c)) {
            tab[j] = malloc(count(str, i, c) + 1);
            my_strncpy(str, tab[j], i, c);
            tab[j][count(str, i, c)] = '\0';
            j++;
        }
        cc = str[i];
        i++;
    }
    tab[j] = NULL;
    return (tab);
}