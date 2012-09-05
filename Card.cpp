#include "Card.h"
#include <iostream>

Card::Card(int r, int s) {
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
  suit = s;
}

void Card::setRank(int r) {
  rank = r;
}

void Card::print() {
  std::cout << rank << " of " << suit << std::endl;
}
