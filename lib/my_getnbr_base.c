/*
** my_getnbr_base.c for Piscine-C-lib in /home/giallo_n/lib
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Thu Oct 10 18:17:15 2013 nathan giallombardo
** Last update Sun Oct 27 09:19:53 2013 nathan giallombardo
*/

int	my_isdouble(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      j = 0;
      while (str[j] != '\0')
	{
	  if (str[i] == str[j] && j != i)
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int	my_iscontent(char *str, char *to_find)
{
  int	i;
  int	j;
  int	e;

  j = 0;
  i = 0;
  while (str[i] != '\0')
    {
      j = 0;
      e = 0;
      if ( str[i] == '-' || str[i] == '+')
	e = 1;
      else
	{
	  while (to_find[j] != '\0')
	    {
	      if(str[i] == to_find[j])
		e = 1;
	      j = j + 1;
	    }
	}
      if (!e)
	return (0);
      i = i + 1;
    }
  return (1);
}

int	my_getneg(int *i,char *str)
{
  int	nb;

  *i = 0;
  nb = 1;
  while (str[*i] == '-' || str[*i] == '+')
    {
      if (str[*i] == '-')
	nb = nb * (- 1);
      *i = *i + 1;
    }
  return (nb);
}

int	my_getdigit(char c, char *base)
{
  int	i;

  i = 0;
  while (base[i] != '\0')
    {
      if (c == base[i])
	return (i);
      i = i + 1;
    }
  return (-1);
}

int	my_getnbr_base(char *str, char *base)
{
  int	nb;
  int	i;
  int	len;
  int	a;

  len = my_strlen(base);
  nb = 0;
  i = 0;
  a = my_getneg(&i, str);
  if (my_strlen(str) == 0 || len == 0)
    return (0);
  else if (my_isdouble(base) || !my_iscontent(str, base))
    return(0);
  while (str[i] != '\0')
    {
      if (nb == 0)
	nb = my_getdigit(str[i], base);
      else
	nb = nb * len +  my_getdigit(str[i], base);
      if(nb < 0)
	return(0);
      i = i + 1;
    }
  return (a * nb);
}
