/*
** my_strcat.c for 102Chiffrement in /home/giallo_n/rendu/CPE_2013_getnextline
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Thu Nov 28 16:06:19 2013 nathan giallombardo
** Last update Thu Nov 28 16:06:23 2013 nathan giallombardo
*/

int	my_strcat(char *dest, char *src)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (src[j])
      dest[i++] = src[j++];
  dest[i] = '\0';
}
