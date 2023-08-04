NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC_DIR = srcs/
INC_DIR = includes/

SRC_OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(SRC_OBJ)
	ar rcs $(NAME) $(SRC_OBJ)

$(SRC_OBJ): $(wildcard $(SRC_DIR)/*.c)
	$(CC) $(CFLAGS) -c $(wildcard $(SRC_DIR)*.c) -I $(INC_DIR)

clean: 	
	rm -f *.o

fclean:
	rm -f $(NAME)

re:
	rm -f all

.PHONY: all clean fclean re