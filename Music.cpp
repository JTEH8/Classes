#include <iostream>
#include <cstring>

using namespace std;

class Music(){
 public:
  Music();
  Music(char*);
  char* getDescription();
  int getYear();
 private:
  char* description;
  int year;
}
