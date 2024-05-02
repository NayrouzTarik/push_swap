NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC = push_swap.h \

SRC = parcing.c \
	my_checker.c \
	doubly_linkedlist.c \
	push_functions.c \
	reverserotate_functions.c \
	rotate_functions \
	swap_functions.c \
	sorting_3.c \
	sorth_2.c \
	sorting_5.c \
	sorth_4.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.c $(INC)
	@${CC} ${CFLAGS} -c -o $@ $<
	@printf "[compiling %-30s] \r"  ${notdir $@}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT : all $(NAME) clean fclean