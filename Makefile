##
## Makefile for 102chiffrement.c in /home/despla_t/rendu/101pong
## 
## Made by Thibault Desplat
## Login   <despla_t@epitech.net>
## 
## Started on  Wed Nov 27 13:13:36 2013 Thibault Desplat
## Last update Thu Nov 28 12:59:07 2013 nathan giallombardo
##

NAME		= 102chiffrement

SRC		= 102chiffrement.c \
		  tools.c

CC		= cc

CFLAGS		= -I. -Ilib/

RM		= rm -f

OBJ		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -Llib/ -lmy -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

