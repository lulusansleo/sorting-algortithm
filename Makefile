##
## EPITECH PROJECT, 2022
## pushswap
## File description:
## Makefile
##

SRC				=	source/main_file.c\
					source/list_functions.c\
					source/list_functions_sec.c\
					source/pushswap.c\
					source/is_sorted.c

OBJ				=	$(SRC:.c=.o)

CPPFLAGS		=	-Wall -Wextra -I./include/ -lncurses

MYH				=	include/my.h

DIR				=	-L./lib/ -lmy

LIBNAME			=	libmy.a

NAME			=	push_swap

all: compil

compil : $(OBJ)
	$(MAKE) -C ./lib/my
	gcc -o $(NAME) $(OBJ) $(DIR) $(LIB) $(CPPFLAGS)

debug:	CPPFLAGS += -g3 -Wall -Wextra
debug:	re

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C ./lib/my

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./lib/my

re: fclean all

.PHONY: all makelib clean fclean re
