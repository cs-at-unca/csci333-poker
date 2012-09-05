#include "Card.h"
#include <iostream>
#include <assert.h>



Card::Card(int r, int s) {
  assert(s >= 1 && s <= 4);
  assert(r >= 2 && r <= 14);

  rank = r;
  suit = s;
}

int Card::getSuit() {
  return suit;
}

int Card::getRank() {
  return rank;
}

void Card::setSuit(int s) {
  assert(s >= 1 && s <= 4);
  suit = s;
}

void Card::setRank(int r) {
  assert(r >= 2 && r <= 14);
  rank = r;
}

void Card::print() {
  std::cout << rank << " of " << suit << std::endl;
}
