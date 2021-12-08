<<<<<<< HEAD
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



=======
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Movies.h"
using namespace std;

Movies::Movies(char* newTitle, char* newDirector, int newYear, int newDuration, char* newRating){
  strcpy(Director, newDirector);
  strcpy(Rating, newRating);
}

void Games::print(){
  cout << "Title: " << Title << endl;
  cout << "Publisher: " << Director << endl;
  cout << "Year: " << Year << endl;
  cout << "Rating: " << Rating << endl;
}

Movies::~Movies{

}



>>>>>>> ff6546f38d419ed538325ec5013e28af16d52091
