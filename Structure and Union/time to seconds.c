//Create a structure Time and convert it into total seconds
#include <stdio.h>
struct time{
  int h,m,s,tim;
};
int main(){
struct time t;
  printf("Enter hours:\n");
  scanf("%d",&t.h);
  printf("Enter minutes:\n");
  scanf("%d",&t.m);
  printf("Enter seconds:\n");
  scanf("%d",&t.s);
  t.tim = (t.h*3600)+(t.m*60)+t.s;
  printf("Total seconds %d\n",t.tim);
  return 0;
}
