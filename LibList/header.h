/*
** header.h for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibList
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Tue Feb  9 05:01:15 2016 MECHAT Guillaume
** Last update Tue Feb  9 05:02:49 2016 MECHAT Guillaume
*/

#ifndef HEADER_H_
# define HEADER_H_

typedef struct		s_list
{
  char			*name;
  struct s_list		*next;
}			t_list

#endif
