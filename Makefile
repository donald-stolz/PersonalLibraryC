CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = rush-2

SRC_DIR = sources/
# Directory of C functions
SRC = *.c
# Wildcard in place of specific file name.
# Use $(SRC_DIR)function.c

OBJ =  *.o

LIB = libft.a
# LIB used in place of 'function.o' files

INC_DIR = includes/
# Add when using multiple local headers in program
# Replace INC
INC = libft.h

all: comp clean

comp:
	$(CC) $(CFLAGS) $(SRC) -I $(INC)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(N00) $(N01) $(N02) $(N03) $(N04)

re: fclean 
	make all