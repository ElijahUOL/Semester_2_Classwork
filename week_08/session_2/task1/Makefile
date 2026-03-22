# Variables
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student
OBJS = main.o student.o

# Phony targets (not actual files)
.PHONY: all clean

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Object files
%.o: %.c student.h structure.h
	$(CC) $(CFLAGS) -c $< -o $@


# Clean up
clean:
	rm -f $(OBJS) $(TARGET)