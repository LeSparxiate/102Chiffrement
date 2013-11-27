/*
** func3.c for PSU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Sun Nov 17 17:35:02 2013 nathan giallombardo
** Last update Sun Nov 17 18:06:25 2013 nathan giallombardo
*/

#include "my.h"
#include <stdarg.h>

int	print_s_maj(va_list *ap)
{
  my_notprintable(va_arg(ap, char*));
}

int	print_pr(va_list *ap)
{
  my_putchar('%');
}
