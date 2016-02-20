/*
** header.h for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Tue Feb  9 04:35:10 2016 MECHAT Guillaume
** Last update Sat Feb 20 19:43:27 2016 MECHAT Guillaume
*/

#ifndef HEADER_H_
# define HEADER_H_

typedef struct		s_list
{
  char			*name;
  struct s_list		*next;
}			t_list;

t_list			*createList();
t_list			*addList(t_list *list, char *element);
int			searchList(t_list *list, char *element);
//t_list			*deleteList(t_list *list, char *element);
t_list			*destroyList(t_list *list);

#endif
