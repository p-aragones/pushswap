##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile of infinadd
##

NAME	=	push_swap

SRC	=	src/principal_functions/main.c			\
		src/principal_functions/pushswap.c 		\
		src/principal_functions/init_numbers.c 	\
		src/principal_functions/sort_list.c 	\
		src/support_functions/move_array.c 		\
		src/support_functions/my_intarrcpy.c 	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/ -pedantic -g3 -Wpedantic -Wno-long-long -Werror

LDLIBS	=	-L./lib/ -lmy

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LDLIBS)

make_lib:
		$(MAKE) -C lib/my

clean:
		rm -f $(OBJ)
		$(MAKE) clean -C lib/my/

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) fclean -C lib/my

run_tests:

re:		fclean all
		$(MAKE) re -C lib/my
