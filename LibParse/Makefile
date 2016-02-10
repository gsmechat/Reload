##
## Makefile for  in /Users/sofiane/Documents/ETNA/C
## 
## Made by MECHAT Guillaume
## Login   <mechat_g@etna-alternance.net>
## 
## Started on  Sat Oct 24 23:10:00 2015 MECHAT Guillaume
## Last update Tue Feb  9 01:15:56 2016 MECHAT Guillaume
##

CC	=	gcc
AR	=	ar r
NAME	=	libparse.a
SRC	=	my_putchar.c	\
		my_putstr.c	\

RM	=	rm -f

all:		
		$(CC) -c $(SRC)
		ar -rcs $(NAME) *.o
		ranlib $(NAME)

clean:
		$(RM) *.o

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
