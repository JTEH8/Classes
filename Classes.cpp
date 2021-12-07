#include <iostream>
#include <cstring>
#include <cctype>
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
  vector <Media*> vect;
  bool x = true;
  char input[100];
  cout << "Enter a command" << endl;
  while(x == true){
    cin >> input;
    if(strcmp(input, "ADD")){
      addMedia(vect);
    }
    if(strcmp(input, "DELETE")){
      deleteMedia(vect);
    }
    if(strcmp(input, "PRINT")){
      printMedia(vect);
    }
    if(strcmp(input, "SEARCH")){
	    searchMedia(vect);
      }
  }
}

void printMedia(vector<Media*> &list){
  cout << "Hello!" << endl;
}

void addMedia(vector<Media*> &list){  
  char input[100];                           
  cout << "You're adding media! Enter they type you're adding below:" << endl;
  cin >> input;
  if(strcmp(input, "Music")){
    char musicTitle[100];
    int musicYear = 0;
    char musicArtist[100];
    int musicDuration = 0;
    char musicPublisher[100];
      cout << "You're adding music! What is it's title?" << endl;
		 cin >> musicTitle;
		 cout << "What is the music's year?" << endl;
		 cin >> musicYear;
		 cout << "Who is the music's artist?" << endl;
		 cin >> musicArtist;
		 cout << "Who is the publisher?" << endl;
		 cin >> musicPublisher;
		 cout << "What is the music's duration?" << endl;
		 cin >> musicDuration;
		 Music* m = new Music(musicTitle, musicYear, musicArtist, musicDuration, musicPublisher);
       list.push_back(m);
          }
    if(strcmp(input, "Video Games")){
      char gamePublisher[100];
      char gameTitle[100];
      char gameRating[100];
      int gameYear = 0;
     cout << "You're adding a video game! What is it's title?" << endl;
		 cin >> gameTitle;
		 cout << "What is the game's year?" << endl;
		 cin >> gameYear;
		 cout << "Who is the game's publisher?" << endl;
		 cin >> gamePublisher;
		 cout << "What is the game's rating?" << endl;
		 cin >> gameRating;
		 Games* g = new Games(gameTitle, gameYear, gamePublisher, gameRating);
       list.push_back(g);
       }
    if(strcmp(input, "Movies")){
      char movieDirector[100];
      char movieTitle[100];
      char movieRating[100];
      int movieDuration = 0;
      int movieYear = 0;
     cout << "You're adding a movie! What is it's title?" << endl;
		 cin >> movieTitle;
		 cout << "What is the movie's year?" << endl;
		 cin >> movieYear;
		 cout << "Who is the movie's director?" << endl;
		 cin >> movieDirector;
		 cout << "What is the movie's duration?" << endl;
		 cin >> movieDuration;
		 cout << "What is the movie's rating?" << endl;
		 cin >> movieRating;
		 Movies* m2 = new Movies(movieTitle, movieDirector, movieYear, movieDuration, movieRating);
       list.push_back(m2);    
    }
  }
 void searchMedia(vector<Media*> &list){
   char input[100];
   char* input2;
   input2 = new char[100];
   int input3 = 0;
   vector<Media*>::iterator ptr;
   cout << "Do you want to search by titlet or by year?" << endl;
   cin >> input;
   if((strcmp(input, "title") == 0) || (strcmp(input, "Title") == 0)){
     cout << "Enter the title of the media: " << endl;
     cin >> input2;
     for(ptr = (list).begin(); ptr < list.end(); ptr++){
     //If the title is the same as the one entered
     if(strcmp((*ptr)->Title, input2) == 0){
       //Prints the student 
       (*ptr)->print();
     }
   } 
   }
   if((strcmp(input, "Year") == 0) || (strcmp(input, "year") == 0)){
     cout << "Enter the year of the media: " << endl;
     cin >> input3;
     for(ptr = (list).begin(); ptr < list.end(); ptr++){
     //If the title is the same as the one entered
     if((*ptr)->Year == input3){
       //Prints the student 
       (*ptr)->print();
     }
   }
   }
   
 }
 void deleteMedia(vector<Media*> &list){
 char input[100];
 char* input2;
 input2 = new char[100];
 char input3[100];
 char input4[100];

 vector<Media*>:: iterator ptr2;
 cout << "Do you want to delete by title or year?" << endl;
 cin >> input;
    if((strcmp(input, "title") == 0) || (strcmp(input, "Title") == 0)){
     cout << "Enter the title of the media: " << endl;
     cin >> input2;
     for(ptr2 = (list).begin(); ptr2 < list.end(); ptr2++){
     //If the title is the same as the one entered
     if(strcmp((*ptr2)->Title, input2) == 0){
       //Deletes the student 
       cout << "This is what you're deleting: " << endl;
       (*ptr2)->print();
       cout << "Are you sure you want to delete this media? (Y/N)" << endl;
       cin >> input3;
       if(strcmp(input3, "Y") == 0){
         delete (*ptr2);
       }
     }
   } 
   }
   if((strcmp(input, "Year") == 0) || (strcmp(input, "year") == 0)){
     cout << "Enter the year of the media: " << endl;
     cin >> input3;
     for(ptr2 = (list).begin(); ptr2 < list.end(); ptr2++){
     //If the title is the same as the one entered
     if((*ptr2)->Year == input3){
       //Prints the student 
        cout << "This is what you're deleting: " << endl;
       (*ptr2)->print();
       cout << "Are you sure you want to delete this media? (Y/N)" << endl;
       cin >> input3;
       if(strcmp(input3, "Y") == 0){
         delete (*ptr2);
     }
   }
   }
 }
 }
