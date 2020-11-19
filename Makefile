##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c		\
		src/pong.c		\
		src/compute_speeds.c

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-Wshadow -I ./include

LIB	=	lib/my -lmy -lm

NAME	=	101pong

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my/
		$(CC) -o $(NAME) $(OBJ) -L $(LIB)

clean:
	make -C lib/my clean
	rm -f $(OBJ)
	rm -f *.gcno *.gcda

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all
