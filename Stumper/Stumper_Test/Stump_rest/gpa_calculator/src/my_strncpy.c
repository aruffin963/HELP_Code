/*
** EPITECH PROJECT, 2021
** mystrncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *str, char *dest, int j, char c)
{
    int i = 0;

    while ((str[j] != c) && (str[j] != '\0')) {
        dest[i] = str[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}