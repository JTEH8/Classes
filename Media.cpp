#include <iostream>
#include <cstring>
#include "Media.h"
using namespace std;

Media::Media(char* newTitle, int newYear){
  strcpy(Title, newTitle);
  Year = newYear;
}
void Media:: print(){
  cout << "Title: " << Title << endl;
  cout << "Year: " << Year << endl;
}


char* Media::getTitle(){
return Title;
}
int Media::getYear() {
  return Year;
}


Media::~Media(){

}
