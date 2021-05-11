/*
** EPITECH PROJECT, 2021
** Reverse Rotate String
** File description:
** main file
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.c"
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
void display_rrostring(char **warr, int nb);
void rrostring(char *str);
char **word_array(char *str, int nb_of_words);
char *cleaned_str(char *str);
int nb_words(char *str);

int main(int ac, char **av)
{
    if (ac != 2) {
        return (0);
    } rrostring(av[1]);
    return (0);
}

void display_rrostring(char **warr, int nb)
{
    int i;

    my_putstr(warr[nb - 1]);
    for (i = 0; i < nb - 1; i++) {
        if (i < nb - 1)
            my_putchar(' ');
        my_putstr(warr[i]);
    } my_putchar('\n');
}

void rrostring(char *str)
{
    char **warr;
    int nb;

    str = cleaned_str(str);
    nb = nb_words(str);
    warr = word_array(str, nb);
    display_rrostring(warr, nb);
}

char *cleaned_str(char *str)
{
    int i;
    int j;
    char *output;

    i = 0;
    j = 0;
    output = malloc(sizeof(char *) * (my_strlen(str) + 1));
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    output[j] = str[i];
    j++;
    i++;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t') {
            if (str[i - 1] == ' ' || str[i - 1] == '\t') {
                output[j] = ' ';
                j++;
            } output[j] = str[i];
            j++;
        } i++;
    } return (output);
}
