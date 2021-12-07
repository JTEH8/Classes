#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

class Media {
public:
  char* Title[100];
  int Year = 0;
  Media(char* newTitle, int Year);
 // char* getTitle();
  virtual void print();
  virtual ~Media(); //Destructor
};

#endif
