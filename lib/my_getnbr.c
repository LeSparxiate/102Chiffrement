/*
** my_getnbr.c for Piscine Day 04 in /home/giallo_n/rendu/Piscine-C-Jour_04
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct  7 00:50:19 2013 nathan giallombardo
** Last update Sun Oct 27 09:19:30 2013 nathan giallombardo
*/

int	my_get_neg(int *i,char *str)
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


int	my_getnbr(char *str)
{
  int	nb;
  int	i;
  int	j;
  int	a;

  nb = 0;
  a = my_get_neg(&j, str);
  i = j;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	  return (a * nb);
      else if (nb == 0)
	nb = str[i] - '0';
      else if ((i - j) > 10)
	return (0);
      else
	nb = (nb * 10 + str[i] - '0');
      if(nb < 0)
	return(0);
      i = i + 1;
    }
  return (a * nb);
}
