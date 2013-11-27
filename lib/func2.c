/*
** func2.c for PSU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Sun Nov 17 17:29:44 2013 nathan giallombardo
** Last update Sun Nov 17 18:46:29 2013 nathan giallombardo
*/

#include "my.h"
#include <stdarg.h>

int	print_o(va_list *ap)
{
  my_putnbr_base(va_arg(ap, int), "01234567");
}

int	print_u(va_list *ap)
{
  my_putnbr_base(va_arg(ap, int), "0123456789");
}

int	print_x(va_list *ap)
{
  my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
}

int	print_p(va_list *ap)
{
  my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
}
