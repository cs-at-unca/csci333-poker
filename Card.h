class Card {
 private:
  int rank;  /* a number between 2 and 14 */
  int suit;  /* a number between 1 and 4 */
  
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
