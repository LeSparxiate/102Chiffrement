/*
** inc.h for inc.h in /home/despla_t/rendu/102chiffrement
**
** Made by Thibault Desplat
** Login   <despla_t@epitech.net>
**
** Started on  Wed Nov 27 23:25:28 2013 Thibault Desplat
** Last update Thu Nov 28 13:21:02 2013 nathan giallombardo
*/
#ifndef INC_H_
# define INC_H_

int     get_keys(char **str, int *keys);
int     my_get_message(char *str, int flags);
int     my_get_chiffrementI(int *keys, char *msg, char *base);
int     my_get_chiffrementP(int *keys, char *msg, char *base);
int	my_epur_str(char *str);

#endif /* !INC_H_ */
