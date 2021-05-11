##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

SRC =	$(shell echo src/*.c)


OBJ = 	$(SRC:.c=.o)

NAME = frenchNameFormatter

all : $(NAME)

$(NAME) :	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean :
	rm -f src/*.o
	rm -f src/*~

fclean :	clean
		rm -f frenchNameFormatter

re : fclean all
