//What will be the output if a file contains a global static int x = 10; and a function inside
//the same file declares static int x = 5; and prints x?
#include <stdio.h>
static int x = 10;
void fun(){
  static int x = 5;
  printf("%d\n",x);
}
int main(){
  fun();
  //printf("%d\n",x);
  return 0;
}
