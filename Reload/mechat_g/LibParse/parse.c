/*
** parse.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibParse
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Mon Feb  8 20:12:55 2016 MECHAT Guillaume
** Last update Mon Feb  8 21:04:32 2016 MECHAT Guillaume
*/

int	*parse_arg(int ac, char **av)
{
  int	i;

  i = 0;
  while (i < ac)
    {
      my_putstr(av[i]);
      i += 1;
      my_putchar('\n');
    }
}
