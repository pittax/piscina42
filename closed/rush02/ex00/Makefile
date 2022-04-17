CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c read_dic.c
OBJ = $(SRC:.c=.o)
NAME = rush-02
RM = rm -rf

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(OBJ)
