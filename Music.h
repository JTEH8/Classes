#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Music : public Media {
public:
  //Variables
  char Artist[100];
  int Duration = 0;
  char Publisher[100];
  //Constructor
  Music(char* newTitle, int newYear, char* newArtist, int newDuration, char* newPublisher);
  //Music print function
  virtual void print();
  //Destructor
  ~Music();
};

#endif 
