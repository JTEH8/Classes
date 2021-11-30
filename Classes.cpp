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
void searchMedia(vector<Media*> &);
void deleteMedia(vector<Media*> &);
int main(){
  Media* list[];
  vector <Media*> vect;
  char* MusicDescription = new char[80];
  bool x = true;
  char input[];
  while(x == true){
    cout >> "Enter an input:" >> endl;
    cin << input;
    
  }
}

void printVectorDescriptions(vector<Media*> *){
  for(int a = 0; a < size; a++){ 
  cout << newlist[a]->getDescription() << endl;
  }
}

void addMedia(vector<Media*> &){  
  char input2[13];
  cout >> "You're adding media! Enter they type you're adding below:" >> endl;
  cin >> input2;
  if(strcmp(input2, "Music")){
                 char* Title[];
                 int Year;
		 char* Publisher[];
		 
		 int duration;
	cout << "You're adding music! What is it's title?" << endl;
		 cin >> Title;
		 cout << "What is the Music's year?" << endl;
		 cin >> Year;
		 cout << "Who is the Music's artist?" << endl;
		 cin >> Artist;
		 cout << "Who is the publisher?" << endl;
		 cin >> Publisher;
		 cout << "What is the Music's duration?" endl;
		 cin >> duration;
       vect.push_back(m);
      
    }
    if(strcmp(input, "Video Games")){
                 char* Title[];
                 int Year;
		 char* Publisher[];
		 double Rating;
		 cout << "You're adding a video game! What is it's title?" << endl;
		 cin >> Title;
		 cout << "What is the game's year?" << endl;
		 cin >> Year;
		 cout << "Who is the game's publisher?" << endl;
		 cin >> Publisher;
		 cout << "What is the game's rating?" endl;
		 cin >> Rating;
		 Games* g = new Games(Title, Year, Publisher, Rating);
      vect.push_back(g);
    }
    if(strcmp(input, "Movies")){
      
      Movies* m2 = new Movies();
      vect.push_back(m2);
    }
  }

