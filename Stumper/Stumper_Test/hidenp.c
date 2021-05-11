/*
** hidenp.c for hidenp in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Wed May  4 08:03:04 2016 Exam User
** Last update Wed May  4 09:42:43 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	hidenp(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (s1[i] != '\0' && s2[j] != '\0')
    {
      if (s1[i] == s2[j])
	{
	  i++;
	  j++;
	}
      else
	j++;
    }
  if (i == my_strlen(s1))
    my_putchar('1');
  else
    my_putchar('0');
  my_putchar('\n');
}

int	main(int ac, char **av)
{
  if (ac == 3)
    hidenp(av[1], av[2]);
  else
    my_putchar('\n');
  return (0);
}
