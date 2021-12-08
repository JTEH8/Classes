#include <iostream>
#include <cstring>
#include <iomanip>
#include "Movies.h"
using namespace std;

Movies::Movies(char* newTitle, char* newDirector, int newYear, int newDuration, char* newRating) :  Media(newTitle, newYear){
  strcpy(Director, newDirector);
  strcpy(Rating, newRating);
}

void Movies::print(){
  cout << "Title: " << Title << endl;
  cout << "Publisher: " << Director << endl;
  cout << "Year: " << Year << endl;
  cout << "Rating: " << Rating << endl;
}

Movies::~Movies(){

}



