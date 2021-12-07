#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Games : public Media {
  public:
  char Publisher[100];
  char Rating[10];
  Games(char* newTitle, int newYear, char* newPublisher, char* newRating);
  virtual void print();
  ~Games();
};

#endif
