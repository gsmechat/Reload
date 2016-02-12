/*
** header.h for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Tue Feb  9 04:35:10 2016 MECHAT Guillaume
** Last update Tue Feb  9 04:44:39 2016 MECHAT Guillaume
*/

#ifndef HEADER_H_
# define HEADER_H_

typedef struct		s_parse
{
  char			*prog;
  char			*arg;
  struct s_parse	*next;
}			t_parse;

#endif
