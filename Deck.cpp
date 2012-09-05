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

void Deck::shuffle() {

}

void Deck::print() {
  for(std::vector<Card>::iterator it = deck.begin(); it != deck.end(); ++it) {
    it->print();
  }
}
