//Header Guard
#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Games : public Media {
  public:
  //Variables
  char Publisher[100];
  char Rating[10];
  //Constructor
  Games(char* newTitle, int newYear, char* newPublisher, char* newRating);
  //Virtual print function
  virtual void print();
  //Destructor
  ~Games();
};

#endif
