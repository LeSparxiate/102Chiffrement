##
## Makefile for PSU_2013_my_printf in /home/giallo_n/rendu/PSU_2013_my_printf/lib
## 
## Made by nathan giallombardo
## Login   <giallo_n@epitech.net>
## 
## Started on  Sun Nov 17 14:49:31 2013 nathan giallombardo
## Last update Wed Nov 27 23:59:54 2013 Thibault Desplat
##

RM	= rm -f

AR	= ar

CFLAGS	= -I.

NAME	= libmy.a

SRCS	= func2.c \
	  func3.c \
	  func.c \
	  my_flag.c \
	  my_notprintable.c \
	  my_printf.c \
	  my_putchar.c \
	  my_putnbr_base.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_str_islower.c \
	  my_str_isnum.c \
	  my_str_isdoublon.c \
	  my_getnbr.c \
	  my_getnbr_base.c \
	  my_strupcase.c

OBJS	= $(SRCS:.c=.o)

$(NAME)	: $(OBJS)
	  $(AR) rc $(NAME) $(OBJS)
	  ranlib $(NAME)

all	: $(NAME)

clean	: 
	 $(RM) $(OBJS)

fclean	: clean
	  $(RM) $(NAME)

re	: fclean all
