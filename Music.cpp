#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

Music::Music(){
  description = new char[80];
}

Music::Music(char* newdescription){
  description = new char[80];
  strcpy(description, newdescription);
}

char* Room::getDescription(){
  return description;
}
