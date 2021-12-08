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
    cin.getline(input,100, '\n');
    if(strcmp(input, "ADD") == 0){
      strcpy(input, "Empty");
      addMedia(vect);
    }
    else if(strcmp(input, "DELETE") == 0){
      deleteMedia(vect);
    }
    else if(strcmp(input, "PRINT") == 0){
      printMedia(vect);
    }
    else if(strcmp(input, "SEARCH") == 0){
       searchMedia(vect);
      }
    else if(strcmp(input, "QUIT") == 0){
      x = false;
      break;
    }
  }
}

void printMedia(vector<Media*> &list){
  vector<Media*>:: iterator printer;
  for(printer = (list).begin(); printer < list.end(); printer++){
  (*printer)->print();
  }
}

void addMedia(vector<Media*> &list){  
  cout << "You're adding media! Enter they type you're adding below:" << endl;
  char input4[100];
  cin.getline(input4, 100, '\n');
  if(strcmp(input4, "Music") == 0){
    char musicTitle[100];
    int musicYear = 0;
    char musicArtist[100];
    int musicDuration = 0;
    char musicPublisher[100];
      cout << "You're adding music! What is it's title?" << endl;
      cin.getline(musicTitle,100, '\n');
		 cout << "What is the music's year?" << endl;
		 cin >> musicYear;
		 cin.ignore(100, '\n');
		 cout << "Who is the music's artist?" << endl;
		 cin.getline(musicArtist,100, '\n');
		 cout << "Who is the publisher?" << endl;
		 cin.getline(musicPublisher,100, '\n');
		 cout << "What is the music's duration?" << endl;
		 cin >> musicDuration;
		 cin.ignore(100, '\n');
		 Music* m = new Music(musicTitle, musicYear, musicArtist, musicDuration, musicPublisher);
       list.push_back(m);
          }
  if(strcmp(input4, "Video Games") == 0){
      char gamePublisher[100];
      char gameTitle[100];
      char gameRating[100];
      int gameYear = 0;
     cout << "You're adding a video game! What is it's title?" << endl;
     cin.getline(gameTitle,100, '\n');
		 cout << "What is the game's year?" << endl;
		 cin >> gameYear;
		 cin.ignore(100, '\n');
		 cout << "Who is the game's publisher?" << endl;
		 cin.getline(gamePublisher,100, '\n');
		 cout << "What is the game's rating?" << endl;
		 cin >> gameRating;
		 cin.ignore(100, '\n');
		 Games* g = new Games(gameTitle, gameYear, gamePublisher, gameRating);
       list.push_back(g);
       }
    if(strcmp(input4, "Movies") == 0){
      char movieDirector[100];
      char movieTitle[100];
      char movieRating[100];
      int movieDuration = 0;
      int movieYear = 0;
     cout << "You're adding a movie! What is it's title?" << endl;
     cin.getline(movieTitle,100, '\n');
		 cout << "What is the movie's year?" << endl;
		 cin >> movieYear;
		 cin.ignore(100, '\n');
		 cout << "Who is the movie's director?" << endl;
		 cin.getline(movieDirector,100, '\n');
		 cout << "What is the movie's duration?" << endl;
		 cin >> movieDuration;
		 cin.ignore(100, '\n');
		 cout << "What is the movie's rating?" << endl;
		 cin >> movieRating;
		 cin.ignore(100,'\n');
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
   cout << "Do you want to search by title or by year?" << endl;
   cin >> input;
   if((strcmp(input, "title") == 0) || (strcmp(input, "Title") == 0)){
     cout << "Enter the title of the media: " << endl;
     cin.getline(input2,100, '\n');
     for(ptr = (list).begin(); ptr < list.end(); ptr++){
     //If the title is the same as the one entered
     if(strcmp((*ptr)->getTitle(), input2) == 0){
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
     if((*ptr)->getYear() == input3){
       //Prints the student 
       (*ptr)->print();
     }
   }
   }
 }
 void deleteMedia(vector<Media*> &list){
 char input[100];
 char input2[100];
 char input3[100];
 int input4 = 0;

 vector<Media*>:: iterator ptr2;
 cout << "Do you want to delete by title or year?" << endl;
 cin >> input;
    if((strcmp(input, "title") == 0) || (strcmp(input, "Title") == 0)){
     cout << "Enter the title of the media: " << endl;
     cin.getline(input2,100, '\n');
     for(ptr2 = (list).begin(); ptr2 < list.end(); ptr2++){
     //If the title is the same as the one entered
     if(strcmp((*ptr2)->getTitle(), input2) == 0){
       //Deletes the student 
       cout << "This is what you're deleting: " << endl;
       (*ptr2)->print();
       cout << "Are you sure you want to delete this media? (Y/N)" << endl;
       cin >> input3;
       cin.ignore(100m '\n');
       if(strcmp(input3, "Y") == 0){
         delete (*ptr2);
       }
     }
   } 
   }
   if((strcmp(input, "Year") == 0) || (strcmp(input, "year") == 0)){
     cout << "Enter the year of the media: " << endl;
     cin >> input4;
     for(ptr2 = (list).begin(); ptr2 < list.end(); ptr2++){
     //If the Year is the same as the one entered
     if((*ptr2)->getYear() == input4){
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
