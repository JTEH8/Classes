#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

Music::~Music(){
  delete[] Music;
}
int* Music::getDuration(){
  return Duration;
}

char* Music::getArtist(){
  return Artist;
}


}
