/*
** my_notprintable.c for PSU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf/lib
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Sun Nov 17 15:22:18 2013 nathan giallombardo
** Last update Sun Nov 17 21:34:52 2013 nathan giallombardo
*/

#include "my.h"

void	my_notprintable(char *str)
{
  while (*str)
    {
      if (*str < 32 || *str >= 127)
	{
	  my_putstr("\\0x");
	  my_putnbr_base(*str++,"01234567");
	}
      else
	my_putchar(*str++);
    }
}
