/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int check_personality(char *str, char *str1, int n)
{
    int i = 0;
    int j = 0;

    if (str[i] != '\0')
        printf("%s ", str);
    if (str1[j] != '\0')
        printf("%s ", str1);
    if (n > 0)
        printf("%dans\n", n);
    else
        printf("impopo\n");

    return 0;
}

int check_number(int n, int nb)
{
    if (n > nb)
        printf("n > nb\n");
    else if (n < nb)
        printf("n < nb");
    else
        printf("n = nb");

    return 0;
}

int tell_me(int i)
{
    if (i >= 0 && i <= 12)
        printf("Bonjour");
    else if (i >= 12 && i <= 24)
        printf("Bonsoir");
    printf(" Alex\n");

    return 0;
}

int sum_pos(void)
{
    int res;

    for (int i = 0; i <= 200; i++)
        res = res + (i + 1);
    printf("%d ", res);
    return 0;
}

int numb(void)
{
    for (int i = 0; i <= 1000000000; i++)
    printf("%d ", i);
    return 0;
}

int main(int ac, char **av)
{
    char *str = "ADONON";
    char *str1 = "Alex";
    int n = -20;
//    check_personality(str, str1, n);
//    check_number(atoi(av[1]), atoi(av[2]));
//    tell_me(atoi(av[1]));
    //   sum_pos();
    numb();
    return 0;
}
