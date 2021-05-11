#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int     count_char(char *str)
{
  int   c;

  c = 0;
  while ((str[c] != ' ') && (str[c] != '\0') && (str[c] != '\n'))
    c++;
  c += 1;
  return (c);
}

int     countword(char *str)
{
  int   i;
  int   n;

  i = 0;
  n = 1;
  while (str[i] != '\0' && str[i] != '\n')
    {
      if (str[i] == ' ' && str[i + 1] != '\0')
        n++;
      i++;
    }
  printf("%s\n", str);
  return (n);
}

int main(int ac, char **av)
{
    countword(av[1]);
}

/*void    strtotab(t_mini *mini, char *str)
{
  int   i;
  int   b;
  int   a;

  b = 0;
  i = 5;
  a = 0;
  mini->tab = xmalloc(sizeof(char*) * ((countword(str) + 1)));
  while (str[i] != '\n' && str[i] != '\0')
    {
      if (str[i] == ':' || str[i] == '\n')
        {
          while (str[i] == ':')
            i++;
          a = a + 1;
          b = 0;
        }
      mini->tab[a] = xmalloc(sizeof(char) * ((count_char(str + i) + 1)));
      while ((str[i] != ':')  && (str[i] != '\n') && (str[i] != '\0'))
        mini->tab[a][b++] = str[i++];
      mini->tab[a][b] = '\0';
      my_strcat(mini->tab[a], "/");
    }
  mini->tab[a + 1] = 0;
  a = 0;
}
*/
