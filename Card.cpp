#include "Card.h"
#include <iostream>
#include <assert.h>

const std::string Card::suitNames[4] = {std::string("Clubs")
				  , std::string("Diamonds")
				  , std::string("Hearts")
				  , std::string("Spades")};

const std::string Card::rankNames[13] = {std::string("Two")
					 , std::string("Three")
					 , std::string("Four")
					 , std::string("Five")
					 , std::string("Six")
					 , std::string("Seven")
					 , std::string("Eight")
					 , std::string("Nine")
					 , std::string("Ten")
					 , std::string("Jack")
					 , std::string("Queen")
					 , std::string("King")
					 , std::string("Ace") };


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
  std::cout << rankNames[rank-2] << " of " << suitNames[suit-1] << std::endl;
}
