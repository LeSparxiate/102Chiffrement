/*
** inc.h for inc.h in /home/despla_t/rendu/102chiffrement
**
** Made by Thibault Desplat
** Login   <despla_t@epitech.net>
**
** Started on  Wed Nov 27 23:25:28 2013 Thibault Desplat
** Last update Wed Nov 27 23:29:41 2013 Thibault Desplat
*/
#ifndef INC_H_
# define INC_H_

int     get_keys(char **str, int *keys);
int     my_get_message(char *str);
int     my_get_chiffrementI(int *keys, char *msg, char *base);
int     my_get_chiffrementP(int *keys, char *msg, char *base);

#endif /* !INC_H_ */
