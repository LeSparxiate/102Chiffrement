/*
** my_putstr.c for Day 04 Piscine in /home/giallo_n/rendu/Piscine-C-Jour_04
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Thu Oct  3 10:57:32 2013 nathan giallombardo
** Last update Sun Nov 17 15:06:08 2013 nathan giallombardo
*/

#include <stdlib.h>
#include "my.h"

void	my_putstr(char *str)
{
  if (str != NULL)
    write(1, str, my_strlen(str));
}
