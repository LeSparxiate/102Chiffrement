/*
** my_str_isdoublon.c for 102Chiffrement in /home/giallo_n/git/102Chiffrement/lib
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Wed Nov 27 16:37:05 2013 nathan giallombardo
** Last update Wed Nov 27 16:40:48 2013 nathan giallombardo
*/
#include "my.h"

int	my_str_isdoublon(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i])
    {
      j = 0;
      while (str[j])
	{
	  if (str[i] == str[j])
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}
