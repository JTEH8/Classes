#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Movies : public Media {
public:
  //Variables
  int Duration = 0;
  char Director[100];
  char Rating[10];
  //Movies constructor
  Movies(char* newTitle, char* newDirector, int newYear, int newDuration, char* newRating);
  //Movie-specific print function
  virtual void print();
  //Destructor
  ~Movies();
};

#endif
