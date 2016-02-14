/*
** func.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibList
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Fri Feb 12 18:15:01 2016 MECHAT Guillaume
** Last update Sat Feb 13 00:00:16 2016 MECHAT Guillaume
*/
#include "header.h"
#include <stdlib.h>

t_list		*createList()
{
  t_list	*list;

  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (0);
  list = NULL;
  return (list);
}
/*
int		destroy(t_list *list)
{

  return (1);
}
*/
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

t_list		*deleteList(t_list *list, char *element)
{
  t_list	*tmp;
  int		stop;

  stop = 0;
  tmp = malloc(sizeof(t_list));
  if (tmp == NULL)
    return (0);
  tmp = list;
  while (tmp != NULL && stop != 1)
    {
      if (my_strcmp(tmp->name, element) == 0)
	stop = 1;
      tmp = tmp->next;
    }
  while (tmp->next != NULL)
    {
      tmp = tmp->next;
    }
  return (tmp);
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
