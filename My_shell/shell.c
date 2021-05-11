/*
** EPITECH PROJECT, 2021
** shell
** File description:
** shell
*/

#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int d = 0;

    for (i = 0;dest[i] != '\0'; i++)
        for (d = 0; src[d] != '\0';i++, d++)
            dest[i] = src[d];
    dest[i] = '\0';
    return (dest);
}

int count(char *str, int j, char c)
{
    int i = 0;

    while ((str[j] != c) && (str[j] != '\0')) {
        j++;
        i++;
    }
    return (i);
}

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

int my_strlen(char const *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    char *p = s1;
    char *q = s2;
    int result = 0;

    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (s2[i] - s1[i]);
        }
        i = i + 1;
    }
    return 0;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (i != n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i += 1;
    return (s1[i] - s2[i]);
}

char *my_strncpy(char *str, char *dest, int j, char c)
{
    int i = 0;

    while ((str[j] != c) && (str[j] != '\0')) { dest[i] = str[j];
        j++;
        i++;}
    dest[i] = '\0';
    return (dest);
}

char **my_str_to_wordtab(char *str, char c)
{
    int i = 0;
    int j = 0;
    char cc = c;
    char **tab = malloc((word_count(str, c) + 1) * sizeof(tab));

    while (str[i] != '\0') {
        if ((cc == c) && (str[i] != c)) {
            tab[j] = malloc(count(str, i, c) + 1);
            my_strncpy(str, tab[j], i, c);
            tab[j][count(str, i, c)] = '\0';
            j++;
        } cc = str[i];
        i++;}
    tab[j] = NULL;
    return (tab);
}

char *my_getenv(char **env, char *elem)
{
    char *p;
    int i = 0;

    while (env[i] != NULL) {
        if (my_strncmp(env[i], elem, my_strlen(elem)) == 0)
            p = env[i] + my_strlen(elem);
        i++; }
    return (p);
}

void execve_command(char **tab)
{
    pid_t pid = 0;
    int which_status = 0;

    pid = fork();
    if (pid == -1)
        perror("failed to create process");
    else if (pid == 0) {
        if ((execve(tab[0], tab, NULL) == -1) > 0){
            perror("Shell");}
        exit(0); } else {
        wait(NULL);
    } return ;
}

char **get_path(char **env, char **cmd)
{
    char *str = my_getenv(env, "PATH");
    char *src = NULL;

    if (cmd[0][0] != '/' && my_strcmp(cmd[0], "./") != 0) {
        cmd = my_str_to_wordtab(str, ':');
        for (int i = 0; cmd[i]; i = i + 1) {
            src = malloc(sizeof(char) * (my_strlen(cmd[i] + 2)));
            my_strcat(src, env[i]);
            my_strcat(src, "/");
            my_strcat(src, cmd[0]);
        }
    }
    return cmd;
}

int shell(char **tab, char **env)
{
    char *buffer = NULL;
    size_t buf = 2048;
    char **command;// = NULL;

    buffer = malloc(sizeof(char *) * (buf + 1));
    if (buffer == NULL) { perror("Shell error");
        exit(1); }
    write(1, "lakoumi $>", 10);
    while ((getline(&buffer, &buf, stdin) > 0)){
        command = get_path(env, tab);
        execve_command(command);
        write(1, "lakoumi $>", 10);
    } my_putstr("Bye Alex\n");
    return 0;
}

int main(int ac, char **av, char **env)
{
    if (ac == 1) shell(av, env);
    else return 84;
    return 0;
}

//my_putstr("\033[01m\033[05m\033[31m\033[03m[");
//      my_putstr("\033[00m");
