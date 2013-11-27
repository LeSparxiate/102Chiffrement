/*
** my_putnbr_base.c for Piscine-C-lib in /home/giallo_n/rendu/Piscine-C-lib/my
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Fri Nov  8 15:03:13 2013 nathan giallombardo
** Last update Fri Nov  8 15:06:14 2013 nathan giallombardo
*/

void    my_putnbr_base(int nb, char *base)
{
  int   r;
  int   d;
  int   size;
  
  size = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  d = 1;
  while ((nb / d) >= size)
    d = d * size;
  while (d > 0)
    {
      r = (nb /d) % size;
      my_putchar(base[r]);
      d = d / size;
    }
}
