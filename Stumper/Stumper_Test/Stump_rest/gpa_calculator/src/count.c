/*
** EPITECH PROJECT, 2021
** count
** File description:
** count
*/

int count(char *str, int j, char c)
{
    int i = 0;

    while ((str[j] != c) && (str[j] != '\0')) {
        j++;
        i++;
    }
    return (i);
}