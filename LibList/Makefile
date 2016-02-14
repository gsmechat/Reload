##
## Makefile for  in /Users/sofiane/Documents/ETNA/C
## 
## Made by MECHAT Guillaume
## Login   <mechat_g@etna-alternance.net>
## 
## Started on  Sat Oct 24 23:10:00 2015 MECHAT Guillaume
## Last update Fri Feb 12 23:31:12 2016 MECHAT Guillaume
##

CC	=	gcc
NAME	=	liblist
AR	=	ar r
LIB	=	liblist.a
SRC	=	main.c		\
		my_putchar.c	\
		my_putstr.c	\
		my_strcmp.c	\
		liblist.c	\
		header.h

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
