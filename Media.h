//Header Guard
#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

class Media {
public:
//Variables
char Title[100];
int Year = 0;
//Constructor
  Media(char* newTitle, int newYear);
  //Return title function
  char* getTitle();
  //General print function
  virtual void print();
  //Return year function
  int getYear();
  ~Media(); //Destructor

};

#endif
