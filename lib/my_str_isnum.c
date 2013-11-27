/*
** my_str_isnum.c for Piscine Day 06 in /home/giallo_n/rendu/Piscine-C-Jour_06/ex_09/ex_11
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct  7 22:08:07 2013 nathan giallombardo
** Last update Wed Nov 27 14:17:45 2013 nathan giallombardo
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      i = i + 1;
    }
  return (1);
}
