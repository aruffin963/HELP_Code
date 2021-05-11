/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <stdio.h>
#include <unistd.h>

int check_voyelle(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        ((str[i] == 'a') ? printf("%c ", str[i]) : i++);
        ((str[i] == 'e') ? printf("%c ", str[i]) : i++);
        ((str[i] == 'i') ? printf("%c ", str[i]) : i++);
        ((str[i] == 'o') ? printf("%c ", str[i]) : i++);
        ((str[i] == 'u') ? printf("%c ", str[i]) : i++);
        ((str[i] == 'y') ? printf("%c ", str[i]) : i++);
        i++;
    }
    return 0;
}
int main()
{
    char *str = "lex";
    check_voyelle(str);
}
