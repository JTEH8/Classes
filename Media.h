#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

class Media {
public:
<<<<<<< HEAD
  char* Title[100];
  int Year = 0;
  Media(char* newTitle, int Year);
  virtual void print();
  virtual ~Media(); //Destructor
=======
 
  Media(char* newTitle, int newYear);
  char* getTitle();
  virtual void print();
  int getYear();
  ~Media(); //Destructor
  protected:
   char Title;
  int Year = 0;
>>>>>>> ff6546f38d419ed538325ec5013e28af16d52091
};

#endif
