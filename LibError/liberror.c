/*
** liberror.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibError
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Feb 25 10:34:48 2016 MECHAT Guillaume
** Last update Thu Feb 25 22:40:30 2016 MECHAT Guillaume
*/

#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

void	error()
{
  char	*action;

  action = "Action";
  perror(action);
  error_log(action);
}

int	error_log(char *txt)
{
  int	id;
  
  id = open("log.txt", O_APPEND|O_CREAT|O_RDWR, 777);
  write_log(txt, id);
  write_log(": ", id);
  write_log(strerror(errno), id);
  write_log("\n", id);
  close(id);
  return (0);
}

int	write_log(char *txt, int id)
{
  write(id, txt, my_strlen(txt));
  return (0);
}
