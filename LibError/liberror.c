/*
** liberror.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibError
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Feb 25 10:34:48 2016 MECHAT Guillaume
** Last update Thu Feb 25 18:06:24 2016 MECHAT Guillaume
*/

#include <errno.h>
#include <fcntl.h>

int	open (char *path, int access, int right);
int my_fputs(char *txt, int file);
void put_error(char *msg);

int my_error(char *message)
{
  if(message)
    {
      perror(message);
      put_error(message);
      return (1);
    }
  return (0);
}

void put_error(char *message)
{
  int file;
  char *error;
  
  file = my_fopen("log.txt", O_APPEND, 0777);
  if(file == 0)
    {
      my_putstr("log file can't be writed");
      return;
    }
  my_fputs(message, file);
  my_fputs(": ", file);
  //  error = strerror(errno);
  //my_fputs(error, file);
  my_fputs("\n", file);
  close(file);

}

int	open(char *path, int access, int right)
{

  int fd;
  fd = open(path, access|O_CREAT|O_RDWR, right);
  return (fd);
}

int my_fputs(char *txt, int file)
{
  int n;
  n = 0;
  //  if (file < 0)
    n = write(file, txt, my_strlen(txt));

    //if(n < 0)
    //{
      perror("my_fputs()");
      return (errno);
      //}
  return (1);
}
