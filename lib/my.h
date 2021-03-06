/*
** my.h for Piscine-C-include in /home/giallo_n/rendu/Piscine-C-include
**
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
**
** Started on  Thu Oct 10 23:48:30 2013 nathan giallombardo
** Last update Thu Nov 28 13:45:02 2013 nathan giallombardo
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char);
void    my_putnbr_base(int, char*);
void	my_putstr(char*);
int	my_strlen(char*);
void	my_notprintable(char*);
int	my_printf(const char *, ...);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isdoublon(char *str);
int	my_getnbr_base(char *str, char *base);
int	my_getnbr(char *str);
int	my_str_isupcase(char *str);
char	**my_str_to_wordtab(char *str);
#endif /* !MY_H_ */
