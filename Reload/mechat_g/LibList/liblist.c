/*
** func.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibList
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Fri Feb 12 18:15:01 2016 MECHAT Guillaume
** Last update Sat Feb 20 19:45:40 2016 MECHAT Guillaume
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
  return (0);
}

/*t_list		*deleteList(t_list *list, char *element)
{
  char		*prev;
  
  while ((list = list->next) != NULL)
    {
      if (my_strcmp(list->name, element) == 0)
	{
	  tmp->next = list->next;
	  free(list);
	  break;
	}
    }
  tmp = list;
  return (tmp);
  }*/

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
