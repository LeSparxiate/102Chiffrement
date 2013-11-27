##
## Makefile for 102chiffrement.c in /home/despla_t/rendu/101pong
## 
## Made by Thibault Desplat
## Login   <despla_t@epitech.net>
## 
## Started on  Wed Nov 27 13:13:36 2013 Thibault Desplat
## Last update Wed Nov 27 16:52:10 2013 Thibault Desplat
##

NAME		= 102chiffrement

SRC		= 102chiffrement.c \
		  102chiffrement2.c

CC		= gcc -o

CFLAGS		= -I.

RM		= rm -f

OBJ		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(NAME) $(OBJ) -lmy -L.

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
