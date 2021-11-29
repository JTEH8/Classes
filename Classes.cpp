#include <iostream>
#include <cstring>
#include "Media.h"
#include "Music.h"
#include "Movies.h"
#include "Games.h"
#include <vector>

using namespace std;

void printVectorDescriptions(vector<Media*> &);
void addMedia(vector<Media*> &);

int main(){
  Media* list[];
  vector <Media*> vect;
  char* MusicDescription = new char[80];
  addMedia(vect);
  
}

void printVectorDescriptions(vector<Media*> *){
  for(int a = 0; a < size; a++){ 
  cout << newlist[a]->getDescription() << endl;
  }
}

void addMedia(vector<Media*> &){
  bool x = true;
  char input[]
  while(x == true){
    cout >> "You're adding media! Enter the type of media you're adding:" >> endl;
    cin << input;
    if(strcmp(input, "Music")){
      Music* m = new Music();
      vect.push_back(m);
    }
    if(strcmp(input, "Video Games")){
      Games* g = new Games();
      vect.push_back(g);
    }
    if(strcmp(input, "Movies")){
      Movies* m2 = new Movies();
      vect.push_back(m2);
    }
  }

  }

