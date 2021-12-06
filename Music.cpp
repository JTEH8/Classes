#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

Music:Music(char newTitle, int newYear, char newArtist, int newDuration, char newPublisher){
  strcpy(Artist, newArtist);
  Duration = newDuration;
  strcpy(Publisher, newPublisher);
}

Music::~Music(){

}

void Music :: print(){
  cout << "Title: " << Title << endl;
  cout << "Artist: " << Artist << endl;
  cout << "Year: " << Year << endl;
  cout << "Duration: " << Duration << endl;
  cout << "Publisher: " << Publisher << endl;
}


