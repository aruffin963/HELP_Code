/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

int do_sum(int a, int b)
{
    int res = a + b;
    printf("res = %d\n", res);
    return (res);
}

int check_mul(int i)
{
    int n = 0;
    for (n = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        else if (i % 3 == 0) {
            printf("%d\n", i);
        }
        else if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

int diviser(int x)
{
    int i = 0;

    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            printf("i = %d \n",i);
        }
    }
    return 0;
}

int check_pgcd(int nb, int n)
{
    int i;
    int j;
    int res;
    int r;

    if (nb > n) {
        i = nb - n;
        j = i - n;
        res = n - j;
        r = j - res;
        if (res - r == 0)
            printf("pgcd(%d;%d) = %d\n", nb , n, r);
        else
            printf("pas possible\n");
    }
    /* else if (nb < n){
        i = nb - n;
    j = i - n;
    res = n - j;
    r = j - res;
    if (res - r == 0)
    printf("pgcd(%d;%d) = %d\n", nb , n, r);*/
    else
        printf("pas possible\n");
    }
    return 0;
}

int check_ppcm(int nb, int n)
{
    int res;

    res = (nb * n) / check_pgcd(nb, n);
    printf("ppcm(%d,%d) = %d\n", nb, n, res);
    return 0;
}

int main(int ac, char **av)
{
    int a = atoi(av[1]);
    int b = atoi(av[2]);
//    int x = atoi(av[3]);
    //  int y = atoi(av[4]);
    // int z = atoi(av[5]);

    // do_sum(a, b);
   diviser(x);
//    check_pgcd(a, b);
//    check_ppcm(a, b);
    return 0;
}
