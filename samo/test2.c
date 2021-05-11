/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <stdio.h>

void is_alpha(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
        //       printf("%c\n", str[i]);
        // printf("%c\n", str[i + 1]);
        printf("%c\n", str[i++]);
        i++;
    }
}

int count(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        is_alpha(str);
    return 0;
}

int main()
{
    char *str = "aleX";
    count(str);
}
