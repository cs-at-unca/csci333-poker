#include <iostream>
#include <cstdlib>
#include "Deck.h"


Deck::Deck() {
  for(int suit = 1; suit <= 4; ++suit) {
    for(int rank = 2; rank <= 14; ++rank) {
      Card* c = new Card(rank, suit);
      deck.push_back(*c);
    }
  }

  top = 0;
}

Card* Deck::deal() {
  Card* result = &deck[top];
  ++top;
  return result;
}

// Use Fisher-Yates shuffle
void Deck::shuffle() {
    // Use size instead of iterators, for ease of Fisher-Yates shuffle
    // algorithm.
    int i;
    Card temp(2,1);

    for (i = deck.size()-1; i >= 0; --i) {
        int r = rand() % (i+1); // random number between 0 and i inclusive

        temp = deck[i];
        deck[i] = deck[r];
        deck[r] = temp;
    }
}

void Deck::print() {
  for(std::vector<Card>::iterator it = deck.begin(); it != deck.end(); ++it) {
    it->print();
  }
}
