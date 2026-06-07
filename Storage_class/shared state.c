/*Shared State
Write a program with two functions that share a variable which is not accessible from main().
Use appropriate storage class concepts*/
#include <stdio.h>
static int num = 100;
void fun1(){
  printf("%d",num);
  printf("\n");
}

void fun2(){
  num++;
  printf("%d",num);
  printf("\n");
}
int main(){
  fun1();
  fun2();
  return 0;
}
