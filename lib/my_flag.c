/*
** my_flag.c for PSU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Thu Nov 14 16:15:12 2013 nathan giallombardo
** Last update Sun Nov 17 18:17:03 2013 nathan giallombardo
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

typedef int (*t_fc)(va_list*);

int	print_s(va_list*);
int	print_c(va_list*);
int	print_i(va_list*);
int	print_b(va_list*);
int	print_o(va_list*);
int	print_u(va_list*);
int	print_x(va_list*);
int	print_p(va_list*);
int	print_s_maj(va_list*);
int	print_pr(va_list*);

typedef struct
{
  char	flag;
  t_fc	fc;
}	t_flag;

t_flag	*my_put_flag(char , t_fc);
t_flag	*my_get_flag(char, t_flag**);
int	my_free_flag(t_flag***);

t_flag		*my_put_flag(char flag, t_fc fc)
{
  t_flag	*func;

  func = malloc(sizeof(t_flag));
  func->flag = flag;
  func->fc = fc;
  return (func);
}

t_flag		*my_get_flag(char flag, t_flag** flags)
{
  while (*flags)
    {
      if ((*flags)->flag == flag)
	return (*flags);
      *flags++;
    }
  return (NULL);
}

int		my_free_flag(t_flag ***flags)
{
  t_flag	**f;

  f = *flags;
  while (*f)
    free(*f++);
}
