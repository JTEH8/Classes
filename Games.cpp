#include <iostream>
#include <iomanip>
#include <cstring>
#include "Games.h"
using namespace std;

Games::Games(char newTitle, int newYear, char newPublisher, float newRating){
  strcpy(Publisher, newPublisher);
  Rating = newRating;
}

void Games::print(){
  cout << "Title: " << Title << endl;
  cout << "Publisher: " << Publisher << endl;
  cout << "Year: " << Year << endl;
  cout << "Rating: " << setprecision(2) << Rating << endl;
}
