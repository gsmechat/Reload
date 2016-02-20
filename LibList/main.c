/*
** main.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Mon Feb  8 20:40:04 2016 MECHAT Guillaume
** Last update Sat Feb 20 23:18:41 2016 MECHAT Guillaume
*/
#include "header.h"
#include <stdlib.h>

#include <unistd.h>
#include <stdio.h>
int		main(int argc, char **argv)
{
  t_list       *list;

  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (0);
  list = createList();
  //destroyList();
  list = addList(list, "coucou");
  list = addList(list, "mdr");
  list = addList(list, "ptdr");
  list = addList(list, "XD");
  list = addList(list, "caca");
  list = addList(list, "pipi");
  int j;

  //  list = deleteList(list, "XD");
  //printf("ici = %d", destroyList(list));
  //printf("LOL");
  j = searchList(list, "coucou");
  printf("%d", j);

  j = searchList(list, "mdr");
  printf("%d", j);

  j = searchList(list, "ptdr");
  printf("%d", j);

  j = searchList(list, "XD");
  printf("%d", j);
  
  j = searchList(list, "caca");
  printf("%d", j);

  j = searchList(list, "pipi");
  printf("%d", j);

  list = destroyList(list);

  return (0);
}
