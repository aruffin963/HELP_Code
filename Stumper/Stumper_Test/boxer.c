/*
** EPITECH PROJECT, 2021
** boxer.c
** File description:
** boxer name formatter
*/

#include <unistd.h>

char *lowercase(char *str)
{
    int n;

    for (n = 0; str[n]; n++) {
        if (str[n] >= 'A' && str[n] <= 'Z')
            str[n] = str[n] + 32;
    }
}

char *first_letter(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
}

void put_cote(void)
{
    my_putchar(' ');
    my_putchar('"');
}

char *boxer_name(char *str)
{
    int i;
    int j;
    int k;

    lowercase(str);
    for (i = 0; str[i]; i++) {
        first_letter(str);
        if (str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z' || str[i] == '-'
            && str[i+1] >= 'a' && str[i+1] <= 'z') {
            if (str[i+1] == 't' && str[i+2] == 'h' && str[i+3] == 'e') {
                k = 1;
                put_cote();
                continue;
            }
            str[i+1] = str[i+1] - 32;
        } if (k == 1 && str[i] == ' ')
              j++;
        if (j == 2 && str[i] == ' ')
            my_putchar('"');
        my_putchar(str[i]);
    }
}

int main (int ac, char **av)
{
    boxer_name(av[1]);
    my_putchar('\n');
    return (0);
}
