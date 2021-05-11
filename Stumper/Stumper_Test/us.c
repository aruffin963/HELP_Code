/*
** EPITECH PROJECT, 2021
** us.c
** File description:
** us
*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

/*char uppcase(char *str)
{
    int n;

    for(n = 0;str[n] != '\0'; n++) {
        if(str[n] >= 'a' && str[n] <= 'z')
            str[n] = str[n] - 32;
    }
}

char lowcase(char *str)
{
    int n;

    for (n = 0; str[n] != '\0'; n++) {
        if (str[n] >= 'A' && str[n] <= 'Z')
            str[n] = str[n] + 32;
    }
}

char name_format(char *str)
{
    int n;

    for(n = 0; str[n] != '\0'; n++) {
        if(str[n] >= 'A' && str[n] <= 'Z')
            str[n] = str[n] + 32;
    }
    str[0] = str[0] - 32;
}

char **my_str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * my_strlen(str));
    int i = 0;
    int j = 0;
    int k = 0;

    array[j] = malloc(my_strlen(str));
    while(str[i] != '\0') {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {
            array[j][k] = str[i];
            k++;
        } else {
            j++;
            k = 0;
            array[j] = malloc(my_strlen(str));
        }
        i++;
    }
    return(array);
}

int us_name(char **av)
{
    char **array = my_str_to_word_array(av[1]);

    if(my_strlen(array[0]) == 2) {
        uppcase(array[0]);
    } else
        name_format(array[0]);
    write(1, array[0], my_strlen(array[0]));
    my_printf(" ");
    if(my_strlen(array[1]) == 1) {
        uppcase(array[1]);
        my_printf("%s", array[1]);
        my_printf(". ");
        name_format(array[2]);
        write(1, array[2], my_strlen(array[2]));
    } else {
        name_format(array[1]);
        write(1, array[1], my_strlen(array[1]));
    }
    my_printf("\n");
    return (0);
    }*/

void first(char *str, int u)
{
    int f;
    char s;

    s = toupper(*str);
    write(1, &s, 1);
    if (u == 2) {
        s = toupper(str[1]);
        write(1, &s, 1);
    } else {
        f = 1;
        while (f != u) {
            s = tolower(str[f]);
            write(1, &s, 1);
            f++;
        }
    }
}

void us_name_format(char *str, int u)
{
    int f;
    char c;

    c = ' ';
    write(1, &c, 1);
    c = toupper(*str);
    write(1, &c, 1);
    if (u == 1) {
        c = '.';
        write(1, &c, 1);
    } else
        for (f = 1;f < u; f++) {
            c = tolower(str[f]);
            write(1, &c, 1);
        }
    if (str[f] == '\0')
        my_printf("\n");
}



void display_name(char *str)
{
    char letter = '0';
    int u;

    while(*str && (*str == ' '))
        *str++;
    while(*str) {
        for (u = 0; str[u] && str[u] != ' ' ; u++);
        if (letter =='0') {
            first(str, u);
            letter = '1';
        } else
            us_name_format(str, u);
        str += u;
        while (*str && (*str == ' '))
            *str++;
    }
}

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Usage: USNameFormatter string\n", 32);
        return (84);
    }
    if(ac == 2) {
        display_name(av[1]);
    }
    return (0);
}
