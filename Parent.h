#include <iostream>
#include <cstring>

class Parent {
 public:
  Parent();
  char* getTitle();
  int getYear();
 private:
  char* title[];
  int year;
};
