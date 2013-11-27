/*
** func.c for PSU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Tue Nov 12 13:01:12 2013 nathan giallombardo
** Last update Sun Nov 17 18:03:04 2013 nathan giallombardo
*/

#include <stdarg.h>
#include "my.h"

int	print_s(va_list *ap)
{
  my_putstr(va_arg(*ap, char*));
}

int	print_c(va_list *ap)
{
  my_putchar((char) va_arg(*ap, int));
}

int	print_i(va_list *ap)
{
  my_put_nbr(va_arg(*ap, int));
}

int	print_b(va_list *ap)
{
  my_putnbr_base(va_arg(*ap, int), "01");
}

