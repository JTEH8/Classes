#include <iostream>
#include <cstring>
#include "Games.h"
using namespace std;

Games::Games(){

}

char* Games::getPublisher(){
  strcpy(Publisher, newPublisher);
  return Publisher;
}

double Games::getRating(){
  return Rating;
}
