CC = g++
CFLAGS = -Wall -Wextra -Werror -Weffc++

test: card_test.cpp
	$(CC) $(CFLAGS) -o test card_test.cpp