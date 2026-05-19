/*Create enum for traffic signal:
RED, YELLOW, GREEN
Print action based on signal*/
#include <stdio.h>
enum traffic_signals{RED,YELLOW,GREEN};
int main(){
  enum traffic_signals action;
  int act;
  printf("Enter input 0 - RED, 1 - YELLOW, 2 - GREEN\n");
  scanf("%d",&act);
  action = act;
  if(action == RED)
    printf("RED - Stop\n");
 
  else if(action == YELLOW)
    printf("YELLOW - Get ready\n");
  
  else if(action == GREEN)
    printf("GREEN - Go\n");
  
  else
    printf("Invalid input!\n");
  
  return 0;
}
