//Write a program using typedef to declare a variable without writing unsigned int again
#include <stdio.h>
typedef unsigned int u;
int main(){
  u n1 = 12345;
  u n2 = 98765;
  printf("n1 = %u\nn2 = %u\n",n1,n2);
  return 0;
}
