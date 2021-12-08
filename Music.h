#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Music : public Media {
public:
  char* Artist[100];
  int Duration = 0;
<<<<<<< HEAD
  char* Publisher[100];
  Music(char* newTitle, int newYear, char* newArtist, int newDuration, char* newPublisher);
  virtual void print();
  virtual ~Music();
=======
  char Publisher[100];
  Music(char* newTitle, int newYear, char* newArtist, int newDuration, char* newPublisher);
  virtual void print();
  ~Music();
>>>>>>> ff6546f38d419ed538325ec5013e28af16d52091
};

#endif 
