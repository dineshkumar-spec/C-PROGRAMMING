//2.Store value using pointer and print it
#include <stdio.h>
int main(){
  int num = 12;
  int *ptr = &num;
  printf("value of num %d\n",num);
   *ptr = 25;
  printf("Value of *ptr is %d\n",*ptr);
  return 0;
}
