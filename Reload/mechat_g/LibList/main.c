/*
** main.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Mon Feb  8 20:40:04 2016 MECHAT Guillaume
** Last update Thu Feb 25 10:45:50 2016 MECHAT Guillaume
*/
#include "header.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
  t_list	*list;
  int		j;

  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (0);
  list = createList();
  list = addList(list, "coucou");
  list = addList(list, "mdr");
  list = addList(list, "ptdr");
  list = deleteList(list, "mdr");
  j = searchList(list, "coucou");
  j = searchList(list, "mdr");
  j = searchList(list, "ptdr");
  return (0);
}
