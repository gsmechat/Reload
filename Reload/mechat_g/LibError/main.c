/*
** main.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibError
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Feb 25 14:31:40 2016 MECHAT Guillaume
** Last update Thu Feb 25 22:21:45 2016 MECHAT Guillaume
*/
#include <stdio.h>

int	main(int argc, char **argv)
{
  FILE* fichier = NULL;

  fichier = fopen("test.txt", "r");
  
  error();
  return (0);
}
