/*
** EPITECH PROJECT, 2021
** snake
** File description:
** case
*/

#include <stdio.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}

char min_to_maj(char *str, int i)
{
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
}

char *maj_to_min(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else
            continue;
    }
    return (str);
}

char *get_validity(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            continue;
        else
            str[i] = ' ';
    }
    return (str);
}

void forms(char *cop_y)
{
    int i = 0;

    for (i = 0; cop_y[i] != '\0'; i++) {
        if (cop_y[i] >= 'a' && cop_y[i] <= 'z' && ((cop_y[i + 1] >= '0' && cop_y[i + 1] <= '9') || cop_y[i + 1] == ' ')) {
            if (cop_y[i] != ' ') {
                write(1, &cop_y[i], 1);
                write(1, "_", 1); } }
        else if ((cop_y[i] >= '0' && cop_y[i] <= '9') && cop_y[i + 1] == ' ') {
            if (cop_y[i] != ' ') {
                write(1, &cop_y[i], 1);
                write(1, "_", 1); } }
        else {
            if (cop_y[i] != ' ')
                write(1, &cop_y[i], 1); } }
    return ;
}

void get_space(char *str)
{
    int i = 0, j = 0, p = 0;
    int lenght = my_strlen(str);
    char temp[lenght + 1];

    while (str[i] == ' ') i++;
    for (; str[i] != '\0'; i++, j++)
        temp[j] = str[i];
    temp[j] = '\0';
    p = my_strlen(temp) - 1;
    for (; temp[p] == ' '; p--) ;
    temp[p + 1] = '\0';
    char *cop_y = get_validity(temp);
    cop_y = maj_to_min(cop_y);
    forms(cop_y);
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    char *str = av[1];
    get_space(str);
    return 0;
}