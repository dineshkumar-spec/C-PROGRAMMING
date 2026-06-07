/*Call Tracker
Write a function trackMe() that prints:
"I have been called X times"
each time it is executed, without using global variables.*/
#include <stdio.h>
void trackme(){
  static int count = 0;
  count++;
  printf("I have been called %d times\n",count);
}
int main(){
  trackme();
  trackme();
  trackme();
  trackme();
  return 0;
}
