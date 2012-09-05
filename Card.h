#ifndef __CARD_H__
#define __CARD_H__

#include <vector>
#include <string>

class Card {
 private:
  int rank;  /* a number between 2 and 14 */
  int suit;  /* a number between 1 and 4 */
  static std::vector<std::string> rankNames;
  //static std::vector<std::string> suitNames;
  
 public:
  Card(int r, int s); //constructor
  
  //getters
  int getRank();
  int getSuit();

  //setters
  void setRank(int r);
  void setSuit(int s);

  //print
  void print();

};
#endif
