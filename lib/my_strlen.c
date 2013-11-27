/*
** my_strlen.c for Piscine-C-lib in /home/giallo_n/rendu/Piscine-C-lib/my
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Wed Oct  9 16:23:41 2013 nathan giallombardo
** Last update Sun Nov 17 20:34:13 2013 nathan giallombardo
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str != NULL)
    {
      while (str[i])
	str[i++];
    }
  return (i);
}
