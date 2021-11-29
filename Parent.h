#include <iostream>
#include <cstring>

class Parent {
 public:
  parent();
  char* getTitle();
  int getYear();
 private:
  char* title[];
  int year;
};
