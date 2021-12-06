#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Games : public Media {
  char Publisher[100];
  float Rating = 0;
 public:
  Games(char newTitle, int newYear, char newPublisher, float newRating);
  virtual void print();
};

#endif
