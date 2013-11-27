/*
** my_str_islower.c for Piscine Day 06 in /home/giallo_n/rendu/Piscine-C-Jour_06/ex_12
**
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
**
** Started on  Tue Oct  8 21:36:19 2013 nathan giallombardo
** Last update Wed Nov 27 14:08:06 2013 Thibault Desplat
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a' || str[i] > 'z') && str[i] != ' ')
	return (0);
      i = i + 1;
    }
  return (1);
}
