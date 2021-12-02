#include <iostream>
#include <cstring>
#include "Media.h"
#include "Music.h"
#include "Movies.h"
#include "Games.h"
#include <vector>

using namespace std;

void printMedia(vector<Media*> &list);
void addMedia(vector<Media*> &list);
void searchMedia(vector<Media*> &list);
void deleteMedia(vector<Media*> &list);
int main(){
  Media* list[];
  vector <Media*> vect;
  char* MusicDescription = new char[80];
  bool x = true;
  char input[];
  while(x == true){
    cout >> "Enter a command" >> endl;
    cin << input;
    if(strcmp(input, "ADD")){
      addMedia(vect);
    }
    if(strcmp(input, "DELETE")){
      deleteMedia(vect);
    }

    if(strcmp(input, "SEARCH"){
	searchMedia(vect);
      }
  }
}

void printMedia(vector<Media*> &list){
  for(int a = 0; a < size; a++){ 
  cout << newlist[a]->getDescription() << endl;
  }
}

void addMedia(vector<Media*> &list){  
  char input2[13];                           
  cout >> "You're adding media! Enter they type you're adding below:" >> endl;
  cin >> input2;
  if(strcmp(input2, "Music")){
    Music* m = new Music();
                 cout << "You're adding music! What is it's title?" << endl;
		 cin >> m->Title;
		 cout << "What is the music's year?" << endl;
		 cin >> m->Year;
		 cout << "Who is the music's artist?" << endl;
		 cin >> m->Artist;
		 cout << "Who is the publisher?" << endl;
		 cin >> m->Publisher;
		 cout << "What is the music's duration?" endl;
		 cin >> m->duration;
       vect.push_back(m);
          }
    if(strcmp(input, "Video Games")){
      Games*g = new Games();
      cout << "You're adding a video game! What is it's title?" << endl;
		 cin >> g->Title;
		 cout << "What is the game's year?" << endl;
		 cin >> g->Year;
		 cout << "Who is the game's publisher?" << endl;
		 cin >> g->Publisher;
		 cout << "What is the game's rating?" endl;
		 cin >> g->Rating;
      vect.push_back(g);
    }
    if(strcmp(input, "Movies")){
      Movies* m2 = new Movies();
      cout << "You're adding a movie! What is it's title?" << endl;
      cin >> m2->Title;
      cout << "What is the movie's year?" << endl;
      cin >> m2->Year;
      cout << "Who is the movie's director?" << endl;
      cin >> m2->Director;
      cout << "What is the movie's duration?" << endl;
      cin >> m2->Duration;
      cout << "What is the movie's rating?" << endl;
      cin >> m2->Rating;
      vect.push_back(m2);
    }
  }

 void deleteMedia(vector<Media*> &in){
   
 }
