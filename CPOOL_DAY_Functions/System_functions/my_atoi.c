/*
** EPITECH PROJECT, 2021
** atoi
** File description:
** get number in string
*/

/* Prototype de la fonction */

int my_atoi(char *str)
{
    /* Déclaration des variables */
    int i = 0, nb = 0, m = 1;

    /* Boucle pour chercher le signe du nombre */
    while (str[i] == '-' || str[i] == '+') {
        if ( str[i] == '-') m = m * -1;
        i++; }
    /* Boucle pour checker le nombre */
    while ( str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10;
        nb = nb + str[i] - 48;
        i++; }
    /* Retour du nombre pour récupéré le nombre */
    return (nb * m);
}
