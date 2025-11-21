CC := gcc
CFLAGS := -g -Wall -I.
SRCS := textmon.c
OBJS := $(SRCS:.c=.o)
TARGET := textmon.exe

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

