
CC = gcc
CFLAGS = -Wall -Wextra 

SRC = main.c node.c
OBJ = $(SRC:.c=.o)
EXE = node

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)

