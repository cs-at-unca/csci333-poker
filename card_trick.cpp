#include <iostream>
#include "Card.h"

using std::cout;
using std::endl;

void cardTrick(int i, Card c);

int main() {
  Card* twoOfSpades = new Card(2,4); //two of spades
  int two = 2;

  twoOfSpades->print();
  cout << two << endl;

  cardTrick(two, *twoOfSpades);

  twoOfSpades->print();
  cout << two << endl;

  return 0;
}

void cardTrick(int i, Card c) {
  c.setRank(5);

  i = 5;
}





