#include <stdio.h>
int* fun(){
  static int num = 20;
  return &num;
}
int main(){
  int *ptr = fun();
  printf("%d\n",*ptr);
  return 0;
}
