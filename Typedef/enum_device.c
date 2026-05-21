/*Create enum for device states:
INIT, RUNNING, ERROR
Update state using function*/
#include <stdio.h>
enum states {INIT = 10, RUNNING = 45, ERROR = 0};
void update(enum states *st){
  *st = RUNNING;
}
int main(){
  enum states st = INIT;
  printf("Before update:%d\n",st);
  update(&st);
  printf("After update:%d\n",st);
  if(st == RUNNING)
    printf("Device is running\n");
  return 0;
}
