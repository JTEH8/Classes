#include <iostream>
#include <cstring>

using namespace std;

class Music : public Parent {
public:
  Music();
  Music(char*);
  char* getArtist();
  int getDuration():
 private:
  char Publisher[];
  int duration;
}
