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
  float Rating = 0;
  Movies(char newTitle, char newDirector, int newYear, int newDuration, float newRating);
  virtual void print();
};

#endif
