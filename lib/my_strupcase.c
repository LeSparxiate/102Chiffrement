/*
** my_strupcase.c for my_strupcase.c in /home/despla_t/rendu/Piscine-C-Jour_06/ex_07
** 
** Made by Thibault Desplat
** Login   <despla_t@epitech.net>
** 
** Started on  Tue Oct  8 22:46:57 2013 Thibault Desplat
** Last update Tue Oct  8 23:04:01 2013 Thibault Desplat
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 122 && str[i] >= 97)
	{
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}
