#include <iostream>
#include "Card.h"
#include "Deck.h"

using std::cout;
using std::endl;

int main() {
  cout << "hello world!" << endl;

  //Card* c = new Card(2,4); //two of spades
  //Card* c2;

  //Card* d = new Card(14,3); //ace of hearts

  //c->print();
  

  Deck* d = new Deck();
  d->shuffle();

  //c2 = d->deal();
  //c2 = d->deal();
  //c2->print();

  d->print();

  return 0;
}
