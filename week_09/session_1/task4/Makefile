
CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c node.c queue.c
OBJ = $(SRC:.c=.o)
EXE = queue

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)

