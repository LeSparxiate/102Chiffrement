/*
** 102chiffrement.c for 102chiffrement.c in /home/despla_t/rendu/102chiffrement
**
** Made by Thibault Desplat
** Login   <despla_t@epitech.net>
**
** Started on  Wed Nov 27 13:22:42 2013 Thibault Desplat
** Last update Thu Nov 28 00:34:02 2013 Thibault Desplat
*/

#include "my.h"
#include "inc.h"

int	check_message(char *str, int flag)
{
  if (!flag)
    return (my_str_islower(str));
  else
    return (my_str_upcase(str));
}

int	check_int(char **argv)
{
  return (my_str_isnum(argv[2]) &&
	  my_str_isnum(argv[3]) &&
	  my_str_isnum(argv[4]) &&
	  my_str_isnum(argv[5]));
}

int	check_flag(char *str)
{
  if (my_strlen(str) > 1)
    return (0);
  if (str[0] != '1' && str[0] != '0')
    return (0);
  else
    return (1);
}

int	check_base(char *str)
{
  if (my_strlen(str) > 1)
    return (my_str_isdoublon(str));
  else
    return (0);
}

int	main(int argc, char **argv)
{
  int	keys[4];

  if (argc != 8)
    {
      my_printf("Usage : %s <message> <k1> <k2> <k3> <k4> <base> <flag>\n",
		argv[0]);
      return (1);
    }
  if (check_message(argv[1]) == 0 || check_int(argv) == 0
      || check_flag(argv[7]) == 0 || check_base(argv[6]) == 0)
    {
      my_printf("Erreur\n");
      return (1);
    }
  my_get_keys(argv, keys, my_getnbr(argv[7]));
  my_get_message(argv[1]);
  if (my_strlen(argv[1]) % 2 == 1)
    my_get_chiffrementI(keys, argv[1], argv[6]);
  else
    my_get_chiffrementP(keys, argv[1], argv[6]);
}
