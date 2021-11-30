#include <iostream>
#include <cstring>
#include "Parent.h"

using namespace std;

class Movies : public Parent {
 public:
  Movies(char* newTitle, char* newDirector, int newYear, int newDuration, double newRating);
  char* getDirector();
  double getRating();
 private:
  char* Director[];
  double Rating;
}
