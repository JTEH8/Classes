#include <iostream>
#include <cstring>
#include "Media.h"
using namespace std;

Media::Media(char newTitle, int newYear){
  strcpy(Title, newTitle);
  Year = newYear;
}
void Media:: print(){
  cout << "" << Title << ", ";
  cout << Year << endl;
}