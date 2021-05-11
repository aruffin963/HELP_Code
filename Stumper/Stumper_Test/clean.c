#include <stdio.h>

char *my_clean_str(char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        str[i] = '\0';
        i = i + 1;
    }
    return (str);
}

int main(void)
{
    char *str = my_clean_str("abc cba abc cab cba");
    printf("%s ", str);
}


int end_str(char *str)
{
    int i = my_strlen(str) - 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
        i--;
    }
    return (i);
}

char *epure_str(char *str)
{
    int i = 0;
    int j = 0;
    int end = end_str(str);
    char *tmp = malloc(sizeof(char) * 4096);

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while(i <= end) {
        if (str[i] != ' ' || str[i + 1] == ' ' ||
            str[i] != '\t') {
            tmp[j] = str[i];
            i++;
            j++;
        }
        while (str[i] == ' ' && str[i + 1] == ' '
               || str[i] == '\t')
            i++;
    }
    tmp[j] = '\0';
    return (tmp);
}
