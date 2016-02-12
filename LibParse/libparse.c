/*
** libparse.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Tue Feb  9 01:52:03 2016 MECHAT Guillaume
** Last update Fri Feb 12 11:58:03 2016 MECHAT Guillaume
*/
#include <stdlib.h>
#include "header.h"

void		affiche(t_parse *parse)
{
  t_parse	*tmp;

  tmp = parse;
  while (tmp != NULL)
    {
      my_putstr("Nom du programme : ");
      my_putstr(tmp->prog);
      my_putstr("\n");
      my_putstr("Les arguments: ");
      my_putstr(tmp->arg);
      my_putstr("\n\n------------------\n\n");
      tmp = tmp->next;
    }
}

t_parse         *add_parse(t_parse *parse, char *prog, char *arg)
{
  t_parse       *tmp;

  tmp = malloc(sizeof(t_parse));
  if (tmp == NULL)
    return (0);
  if (tmp)
    {
      tmp->prog = prog;
      tmp->arg = arg;
      tmp->next = parse;
    }
  return (tmp);
}

int		verif_same_prog(t_parse *parse, char *prog, char *arg)
{
  int		result;
  t_parse	*tmp;
  int		stop;

  result = 1;
  stop = 0;
  tmp = malloc(sizeof(t_parse));
  if (tmp == NULL)
    return (0);
  tmp = parse;
  while (tmp != NULL)
    {
      result = my_strcmp(tmp->prog, prog);
      my_putstr("ici result = ");
      my_putchar(result);
      if (result == 0)
	stop = 1;
    }
  if (stop != 1)
    {
      parse = add_parse(parse, prog, arg);
    }
  affiche(parse);
}

char		*parcours(char *str, t_parse *parse)
{
  int		i;
  int		j;
  char		*prog;
  char		*arg;
  
  i = 0;
  j = 0;
  prog = malloc(sizeof(char));
  arg = malloc(sizeof(char));
  if (prog == NULL || arg == NULL)
    return (0);
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
  verif_same_prog(parse, prog, arg);
}

void		libparse(int ac, char **av)
{
  int		i;
  t_parse	*parse;
  
  i = 1;
  parse = NULL;
  if (ac == 1)
    my_putstr("SYNTAX: ./liparse -prog:argument");
  while (i < ac)
    {
      if (av[i][0] == '-')
	parcours(av[i], parse);
      //      else
      //my_putstr("SYNTAX: ./liparse -prog:argument");
      i = i + 1;
    }
}
