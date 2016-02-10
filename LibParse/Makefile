##
## Makefile for  in /Users/sofiane/Documents/ETNA/C
## 
## Made by MECHAT Guillaume
## Login   <mechat_g@etna-alternance.net>
## 
## Started on  Sat Oct 24 23:10:00 2015 MECHAT Guillaume
## Last update Tue Feb  9 02:21:14 2016 MECHAT Guillaume
##

CC	=	gcc
AR	=	ar r
LIB	=	libparse.a
PROG	=	main.c
SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strcmp.c	\
		libparse.c	\

RM	=	rm -f

all:		
		$(CC) -c $(SRC)
		ar -rcs $(LIB) *.o
		ranlib $(LIB)
		$(CC) $(PROG) $(LIB)

clean:
		$(RM) *.o

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
