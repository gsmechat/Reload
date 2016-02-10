/*
** libparse.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Tue Feb  9 01:52:03 2016 MECHAT Guillaume
** Last update Tue Feb  9 02:11:02 2016 MECHAT Guillaume
*/

void	libparse(int ac, char **av)
{
  int	i;

  i = 1;
  while (i < ac)
    {
      if (
      my_putstr(av[i]);
      i = i + 1;
    }
}
