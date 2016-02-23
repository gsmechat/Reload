/*
** func.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibList
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Fri Feb 12 18:15:01 2016 MECHAT Guillaume
** Last update Tue Feb 23 11:51:32 2016 MECHAT Guillaume
*/
#include "header.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

t_list		*createList()
{
  t_list	*list;

  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (0);
  list = NULL;
  return (list);
}

t_list		*destroyList(t_list *list)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp == NULL)
    return (0);
  while (list != NULL)
    {
      tmp = list->next;
      free(list);
      list = tmp;
    }
  free(tmp);
  return (list);
}

int		searchList(t_list *list, char *element)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp == NULL)
    return (0);
  tmp = list;
  while (tmp != NULL)
    {
      if (my_strcmp(tmp->name, element) == 0)
	return (1);
      tmp = tmp->next;
    }
  free(tmp);
  return (0);
}

t_list		*deleteList(t_list *list, char *element)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp == NULL)
    return (0);
  if(list == NULL)
    return (0);

  if(my_strcmp(list->name, element) == 0)
    {
      tmp = list->next;
      free(list);
      tmp = deleteList(tmp, element);
      return (tmp);
    }
  else
    {
      list->next = deleteList(list->next, element);
      return (list);
    }
}

t_list		*addList(t_list *list, char *element)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp == NULL)
    return (0);
  if (tmp)
    {
      tmp->name = element;
      tmp->next = list;
    }
  return (tmp);
}
