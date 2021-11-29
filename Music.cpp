#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

Music::Music(){
  cout << "Adding Music" << endl;
  Publisher = new char[80];
  duration = 0;
}
char* Music::getArtist(){

}
Music::Music(char* newdescription){
  description = new char[80];
  strcpy(description, newdescription);
}

char* Room::getDescription(){
  return description;
}
}
