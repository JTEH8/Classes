#include <iostream>
#include <cstring>
#include <iomanip>
#include "Movies.h"
using namespace std;

Movies::Movies(char* newTitle, int newYear, char* newPublisher, char* newRating){
  strcpy(Publisher, newPublisher);
  strcpy(Rating, newRating);
}

void Games::print(){
  cout << "Title: " << Title << endl;
  cout << "Publisher: " << Publisher << endl;
  cout << "Year: " << Year << endl;
  cout << "Rating: " << Rating << endl;
}

Movies::~Movies{

}



