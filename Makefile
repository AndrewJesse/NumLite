CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = main.c data/dynamic_array.c
OBJ = $(SRC:.c=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $(OBJ)

clean:
	rm -rf $(OBJ) $(EXEC)