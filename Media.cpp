#include <iostream>
#include <cstring>
#include "Media.h"
using namespace std;
//Defines constructor and copies the title and year
Media::Media(char* newTitle, int newYear){
  strcpy(Title, newTitle);
  Year = newYear;
}
//General print function
void Media:: print(){
  cout << "Title: " << Title << endl;
  cout << "Year: " << Year << endl;
}

//Returns tile (Used for deleting and searching)
char* Media::getTitle(){
return Title;
}
//Returns the year (Used for deleting and searching)
int Media::getYear() {
  return Year;
}

//Destructor
Media::~Media(){

}
