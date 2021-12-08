#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Movies : public Media {
public:
  int Duration = 0;
  char Director[100];
  char Rating[10];
  Movies(char* newTitle, char* newDirector, int newYear, int newDuration, char* newRating);
  virtual void print();
  ~Movies();
};

#endif
