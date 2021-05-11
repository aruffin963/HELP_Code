/*
** EPITECH PROJECT, 2021
** word
** File description:
** count
*/

int word_count(char *str, char c)
{
    int i = 0;
    int j = 0;
    char cc = c;

    while (str[i] != '\0') {
        if ((cc == c) && (str[i] != c)) {
            j++;
        }
        cc = str[i];
        i++;
    }
    return (j);
}