CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LFLAGS = -lm
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
TARGET = myappnumber

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LFLAGS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
