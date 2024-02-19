NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC = push_swap.h \

SRC = 

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