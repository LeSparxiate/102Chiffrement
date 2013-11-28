/*
** 102chiffrement2.c for 102chiffrement2.c in /home/despla_t/rendu/102chiffrement
**
** Made by Thibault Desplat
** Login   <despla_t@epitech.net>
**
** Started on  Wed Nov 27 16:36:46 2013 Thibault Desplat
** Last update Thu Nov 28 13:13:46 2013 nathan giallombardo
*/

#include "my.h"
#include "inc.h"

int	my_get_digit(char c)
{
  if (c == ' ')
    return (0);
  else
    return ((int)c);
}


int	my_get_keys(char **str, int *keys, int flag)
{
  if (!flag)
    {
      keys[0] = my_getnbr(str[2]);
      keys[1] = my_getnbr(str[3]);
      keys[2] = my_getnbr(str[4]);
      keys[3] = my_getnbr(str[5]);
    }
  else
    {
      keys[0] = my_getnbr(str[5]);
      keys[1] = -my_getnbr(str[4]);
      keys[2] = -my_getnbr(str[3]);
      keys[3] = my_getnbr(str[2]);
    }
}

int	my_get_message(char *str, int flags)
{
  int	i;

  if (flags)
    my_epur_str(str);
  i = 0;
  while (str[i])
    {
      if (str[i] != ' ')
	str[i] = str[i] - 96;
      i++;
    }
}

int	my_get_chiffrementI(int *keys, char *msg, char *base)
{
  int	i;
  int	e;

  i = 0;
  e = 1;
  while (msg[i + 1] && e)
    {
      my_putnbr_base(keys[0] * my_get_digit(msg[i]) +
		     keys[2] * my_get_digit(msg[i + 1]), base);
      my_putchar(' ');
      my_putnbr_base(keys[1] * my_get_digit(msg[i]) +
		     keys[3] * my_get_digit(msg[i + 1]), base);
      my_putchar(' ');
      if (!msg[i + 1])
	e = 0;
      i = i + 2;
    }
  my_putnbr_base(keys[0] * my_get_digit(msg[i]) +
		 keys[2] * my_get_digit(msg[i + 1]), base);
  my_putchar(' ');
  my_putnbr_base(keys[1] * my_get_digit(msg[i]) +
		 keys[3] * my_get_digit(msg[i + 1]), base);
  my_putchar('\n');
}

int	my_get_chiffrementP(int *keys, char *msg, char *base)
{
  int	i;

  i = 0;
  while (msg[i])
    {
      my_putnbr_base(keys[0] * my_get_digit(msg[i]) +
		     keys[2] * my_get_digit(msg[i + 1]), base);
      my_putchar(' ');
      my_putnbr_base(keys[1] * my_get_digit(msg[i]) +
		     keys[3] * my_get_digit(msg[i + 1]), base);
      my_putchar(' ');
      i = i + 2;
    }
  my_putchar('\n');
}


int	my_epur_str(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i])
    {
      while (str[j] == ' ')
	j = j + 1;
      str[i] = str[j];
      i = i + 1;
      j = j + 1;
    }
}
