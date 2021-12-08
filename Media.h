#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

class Media {
public:
  Media(char* newTitle, int newYear);
  char* getTitle();
  virtual void print();
  int getYear();
  ~Media(); //Destructor
  protected:
   char Title;
  int Year = 0;
};

#endif
