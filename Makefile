CC = g++
CFLAGS = -Wall -Wextra -Werror

test: card_test.cpp Card.o
	$(CC) $(CFLAGS) -o test card_test.cpp Card.o

Card.o: Card.h Card.cpp
	$(CC) $(CFLAGS) -c Card.cpp