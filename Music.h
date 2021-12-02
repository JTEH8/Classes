#include <iostream>
#include <cstring>

using namespace std;

class Music : public Parent {
public:
  Music(char* newTitle, int newYear, char* newArtist, int newDuration);
  char* getArtist();
  int getDuration();
  ~Music();
private:
  char* Artist;
  int Duration;
};
