/*
** EPITECH PROJECT, 2019
** sort words
** File description:
** main file
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    while (*str) {
        write(1, &(*str), 1);
        str++;
    }
}

int my_strlen(char const *str)
{
    int len;

    len = 0;
    while (*str) {
        len++;
        str++;
    } return (len);
}


int nb_words(char *str)
{
    int i;
    int nb_of_words;

    i = 0;
    nb_of_words = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ')
            nb_of_words++;
        i++;
    } nb_of_words++;
    return (nb_of_words);
}

char **word_array(char *str, int nb_of_words)
{
    int i;
    int j;
    int k;
    char **array;

    array = malloc(sizeof(char *) * (nb_of_words));
    for (i = 0; i < (nb_of_words + 1); i++)
        array[i] = malloc(sizeof(char *) * 30);
    for (i = 0; str[i] == ' ' || str[i] == '\t'; i++);
    for (j = 0; j < nb_of_words && str[i] != '\0'; j++) {
        k = 0;
        while (str[i] != ' ' && str[i] != '\t') {
            array[j][k] = str[i];
            i++;
            k++;
            if (k > 30)
                break;
        } while (str[i] == ' ' || str[i] == '\t')
            i++;
    } return (array);
}
