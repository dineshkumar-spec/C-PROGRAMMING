/*Assign custom values in enum:
START = 10, STOP = 20, PAUSE = 30*/
#include <stdio.h>
enum values{
  START = 10,
  STOP = 20,
  PAUSE = 30
};
int main(){
  printf("START = %d\nSTOP = %d\nPAUSE = %d\n",START,STOP,PAUSE);
  return 0;
}
