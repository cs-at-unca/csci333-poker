#include <iostream>
#include "Card.h"

using std::cout;
using std::endl;

int main() {
  cout << "hello world!" << endl;

  Card* c = new Card(2,4); //two of spades

  //Card* d = new Card(14,3); //ace of hearts

  c->print();
  
  return 0;
}
