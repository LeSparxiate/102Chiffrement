/*
** my_put_nbr.c for Day 03 Piscine in /home/giallo_n/rendu/Piscine-C-Jour_03
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Wed Oct  2 18:22:20 2013 nathan giallombardo
** Last update Thu Oct 24 10:07:12 2013 nathan giallombardo
*/

int	my_put_nbr(int nb)
{
  int	i;
  long	r;
  int	length;

  nb = verif_isneg(nb);
  i = nb;
  r = 1;
  length = 0;
  while (i > 0)
    {
      r = r * 10 + i % 10;
      i = i / 10;
      length = length + 1;
    }
  my_convert(r,length);
  
}

int	verif_isneg(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      return (-nb);
    }
  else
      return (nb);
}

int	my_convert(long a, int length)
{
  int	i;

  i = 0;
  while (i < length)
    {
      my_putchar('0' + a % 10);
      a = a /10;
      i = i + 1;
    }
  if (length == 0)
      my_putchar('0');
}
