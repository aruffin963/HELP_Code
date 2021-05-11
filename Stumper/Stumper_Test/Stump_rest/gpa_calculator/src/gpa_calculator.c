/*
** EPITECH PROJECT, 2021
** gpa
** File description:
** calculator
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int count(char *str, int j, char c);

char *my_strncpy(char *str, char *dest, int j, char c);

char **my_str_to_wordtab(char *str, char c);

int word_count(char *str, char c);

int get_av(int ac, char **av)
{
    char *str;
    int i = 0;
    for (i = 1; i < ac; i++){
        int n = atoi(av[i]);
        printf("%d ", n);
    }
    return 0;
}

int assign_to_grade()

int calc_gpa(int ac, char **av)
{
    int i = get_av(ac, av);

    return 0;
}

int main(int ac, char **av)
{
    get_av(ac, av);
    return 0;
}