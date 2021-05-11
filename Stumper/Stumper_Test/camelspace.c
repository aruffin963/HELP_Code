/*
** EPITECH PROJECT, 2021
** ftn
** File description:
** ftn
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int test(char p)
{
    int i = 0;

    if (p < '0' || (p > '9' && p < 'A') || (p > 'Z' && p < 'a') || p > 'z')
        return (0);
    return (1);
}

int camel(char *p)
{
    int j = 0;
    int n = 0;

    for (j = 0; test(p[j]) == 0; j++)
        ;
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            p[i] = p[i] + 32;
        }
    }
    my_putchar(p[j]);
    j++;
    for (; p[j] != '\0'; j++)
    {
        if (p[j] >= 'a' && p[j] <= 'z' && (test(p[j - 1]) == 0 || p[j - 1] >= '0' && p[j - 1] <= '9'))
        {
            p[j] = p[j] - 32;
        }
        if (test(p[j]) == 1)
            my_putchar(p[j]);
        else
            return 84;
    }
}

int main(int ac, char **av)
{
    int a;
    char *str;

    if (strlen(av[1]) == 0)
    {
        write(1, "\n", 1);
        return 0;
    }
    if (ac == 2)
    {
        str = av[1];
        camel(str);
    }
    else
    {
        return (84);
    }
    return (0);
}