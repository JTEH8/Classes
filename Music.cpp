#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;
//Music COnstructor and copies duration, publisher, and artist.
Music::Music(char* newTitle, int newYear, char* newArtist, int newDuration, char* newPublisher): Media(newTitle, newYear){
  strcpy(Artist, newArtist);
  Duration = newDuration;
  strcpy(Publisher, newPublisher);
}
//Destructor
Music::~Music(){

}
//Music Print function
void Music :: print(){
  cout << "Title: " << Title << endl;
  cout << "Artist: " << Artist << endl;
  cout << "Year: " << Year << endl;
  cout << "Duration: " << Duration << endl;
  cout << "Publisher: " << Publisher << endl;
}


