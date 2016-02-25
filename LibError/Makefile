##
## Makefile for  in /Users/sofiane/Documents/ETNA/C
## 
## Made by MECHAT Guillaume
## Login   <mechat_g@etna-alternance.net>
## 
## Started on  Sat Oct 24 23:10:00 2015 MECHAT Guillaume
## Last update Thu Feb 25 22:49:26 2016 MECHAT Guillaume
##

CC	=	gcc
NAME	=	liberror
AR	=	ar r
LIB	=	liberror.a
SRC	=	main.c		\
		liberror.c	\
		my_strlen.c

FLAG	=	-W -Wall -Werror -Wextra
OBJS	=	$(SRC:%.c=%.o)
RM	=	rm -rf

$(NAME):	$(OBJS)
		$(CC) -c $(SRC)
		ar -rcs $(LIB) *.o
		ranlib $(LIB)
		$(CC) $(OBJS) $(LIB) -o $(NAME) $(FLAG)

all:		$(NAME)

clean:
		$(RM) *.o

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
