/*
** my_printf.c for PDU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Fri Nov  8 13:59:43 2013 nathan giallombardo
** Last update Fri Nov 22 10:24:03 2013 nathan giallombardo
*/

#include	<stdarg.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	"my.h"

typedef int	(*t_fc)(va_list*);

int		print_s(va_list*);
int		print_c(va_list*);
int		print_i(va_list*);
int		print_b(va_list*);
int		print_o(va_list*);
int		print_u(va_list*);
int		print_x(va_list*);
int		print_p(va_list*);
int		print_s_maj(va_list*);
int		print_pr(va_list*);

typedef		struct
{
  char		flag;
  t_fc		fc;
}		t_flag;

t_flag		*my_put_flag(char , t_fc);
t_flag		*my_get_flag(char, t_flag**);
int		my_free_flag(t_flag***);

t_flag		**init_tab_flag(t_flag **tab)
{
  tab[0] = my_put_flag('s', &print_s);
  tab[1] = my_put_flag('c', &print_c);
  tab[2] = my_put_flag('i', &print_i);
  tab[3] = my_put_flag('d', &print_i);
  tab[4] = my_put_flag('b', &print_b);
  tab[5] = my_put_flag('o', &print_o);
  tab[6] = my_put_flag('u', &print_u);
  tab[7] = my_put_flag('x', &print_x);
  tab[8] = my_put_flag('X', &print_x);
  tab[9] = my_put_flag('p', &print_p);
  tab[10] = my_put_flag('S', &print_s_maj);
  tab[11] = my_put_flag('%', &print_pr);
  tab[12] = NULL;
  return (tab);
}

int		my_printf(const char *format, ...)
{
  va_list	ap;
  t_flag	**tab;
  t_flag	*flag;

  tab = malloc(13 * sizeof(t_flag*));
  tab = init_tab_flag(tab);
  va_start(ap, format);
  while (*format)
    {
      if (*format == '%')
	{
	  *format++;
	  if ((flag = my_get_flag(*format, tab)) != NULL)
	      flag->fc(&ap);
	  else
	    my_putchar('%');
	  *format++;
	}
      else
	my_putchar(*format++);
    }
  va_end(ap);
  my_free_flag(&tab);
  free(tab);
}
