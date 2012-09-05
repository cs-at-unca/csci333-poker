#ifndef __DECK_H__
#define __DECK_H__

#include "Card.h"
#include <vector>

class Deck {
 private:
  std::vector<Card> deck;
  int top;


 public:
  Deck();
  Card* deal();
  void shuffle();
  void print();
};

#endif
