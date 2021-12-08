#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Games : public Media {
  public:
<<<<<<< HEAD
  char* Publisher[100];
  char* Rating[10];
=======
  char Publisher[100];
  char Rating[10];
>>>>>>> ff6546f38d419ed538325ec5013e28af16d52091
  Games(char* newTitle, int newYear, char* newPublisher, char* newRating);
  virtual void print();
  ~Games();
};

#endif
