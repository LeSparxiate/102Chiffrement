/*
** my_str_to_wordtab.c for Piscine-C-lib in /home/giallo_n/lib
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Fri Oct 11 15:13:49 2013 nathan giallombardo
** Last update Tue Oct 22 20:53:47 2013 nathan giallombardo
*/

#include <stdlib.h>

int	my_isnalpha(char c)
{
  if (!(c >= 'a' && c <= 'z'))
    {
      if (!(c >= 'A' && c <= 'Z'))
	{
	  if (!(c >= '0' && c <= '9'))
	    return (1);
	}
    }
  return (0);
}

char	*my_strdupbe(char *src, int begin, int end)
{
  char	*dest;
  int	i;

  i = 0;
  if (begin < end)
    {
      dest = malloc((end - begin) * sizeof(char));
      while (src[begin] != '\0' && begin < end)
	{
	  dest[i] = src[begin];
	  begin = begin + 1;
	  i = i + 1;
	}
    }
  return (dest);
}

int	my_count_nalpha(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (my_isnalpha(str[i]))
	    count = count + 1;
      i = i + 1;
    }
  return (count);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	pres;

  i = 0;
  j = 0;
  pres = 0;
  tab = malloc((my_count_nalpha(str) + 1) * sizeof(char *));
  while (str[i] != '\0')
    {
      if (!my_isnalpha(str[i]))
	{
	  pres = i;
	  while (!my_isnalpha(str[i]) && str[i] != '\0')
	    {
	      i = i + 1;
	    }
	  tab[j] = my_strdupbe(str, pres, i);
	  j = j + 1;
	}
      if (str[i] != '\0')
	i = i + 1;
    }
  tab[j] = 0;
  return (tab);
}
