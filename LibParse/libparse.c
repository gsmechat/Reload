/*
** libparse.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Tue Feb  9 01:52:03 2016 MECHAT Guillaume
** Last update Tue Feb  9 04:31:48 2016 MECHAT Guillaume
*/
#include <stdlib.h>

char	*parcours(char *str)
{
  int	i;
  int	j;
  char	*prog;
  char	*arg;

  i = 0;
  j = 0;
  prog = malloc(sizeof(char));
  arg = malloc(sizeof(char));
  if (prog == 0 || arg == 0)
    return (NULL);
  while (str[i] != '\0' && str[i] != ':')
    {
      prog[i] = str[i];
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      if (j == 0)
	i = i + 1;
      arg[j] = str[i];
      i = i + 1;
      j = j + 1;
    }
  my_putstr("prog = ");
  my_putstr(prog);
  my_putstr("\narg = ");
  my_putstr(arg);
}

void	libparse(int ac, char **av)
{
  int	i;
  
  i = 1;
  while (i < ac)
    {
      if (av[i][0] == '-')
	parcours(av[i]);
      i = i + 1;
    }
}
