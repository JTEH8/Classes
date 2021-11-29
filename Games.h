#include <iostream>
#include <cstring>
#include "Parent.h"

using namespace std;

class Games : public Parent {
  
 public:
  Games(char* newTitle, int newYear, char* newPublisher, double newRating);
  char* getPublisher();
  double getRating();
};
