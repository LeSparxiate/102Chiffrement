/*
** my_strupcase.c for my_strupcase.c in /home/despla_t/rendu/Piscine-C-Jour_06/ex_07
** 
** Made by Thibault Desplat
** Login   <despla_t@epitech.net>
** 
** Started on  Tue Oct  8 22:46:57 2013 Thibault Desplat
** Last update Thu Nov 28 13:18:47 2013 nathan giallombardo
*/

int	*my_str_isupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'A' || str[i] > 'Z') && str[i] != ' ')
	return (0);
      i = i + 1;
    }
  return (1);
}
