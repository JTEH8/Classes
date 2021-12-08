#include <iostream>
#include <iomanip>
#include <cstring>
#include "Games.h"
using namespace std;

Games::Games(char* newTitle, int newYear, char* newPublisher, char* newRating): Media(newTitle, newYear){
  strcpy(Publisher, newPublisher);
  strcpy(Rating, newRating);
}

void Games::print(){
  cout << "Title: " << Title << endl;
  cout << "Publisher: " << Publisher << endl;
  cout << "Year: " << Year << endl;
  cout << "Rating: " << Rating << endl;
}

Games::~Games(){

}
