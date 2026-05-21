/*Create structure for motor:
• speed
• direction (enum CW/CCW)*/
#include <stdio.h>
enum direction {CW,CCW};

struct motor{
  float speed;
  enum direction d;
};
int main(){
  struct motor m;

  printf("Enter speed:\n");
  scanf("%f",&m.speed);
  printf("Enter CW-0 or CCW-1:\n");
  scanf("%d",(int *)&m.d);
  printf("Speed of motor:%.2f\n",m.speed);
  if(m.d == CW)
  printf("Direction is CW\n");
  else
  printf("Direction is CCW\n");
  return 0;
}
