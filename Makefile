CC := clang
CFLAGS := -O2 -Wall -Wextra -g

main: main.c
	$(CC) $(CFLAGS) main.c -o later
