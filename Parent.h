#include <iostream>
#include <cstring>

class Parent {
 public:
  Parent();
  char* getTitle();
  int getYear();
 private:
  char* Title[];
  int Year;
};
