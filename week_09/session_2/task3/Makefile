
CC = gcc
CFLAGS = -Wall -Wextra 

SRC = main.c tree.c
OBJ = $(SRC:.c=.o)
EXE = tree

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)

