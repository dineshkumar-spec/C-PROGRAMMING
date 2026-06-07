/*Memory Address Comparison
Write a program to print the addresses of a stack variable and a static variable. What
difference do you observe between their memory locations?*/

/*stack have high address where static stored in data segment so it have low address*/
#include <stdio.h>
int main(){
  int num = 5;
  static int n = 8;
  printf("Address of Stack variable = %p\n",&num);
  printf("Address of Static variable = %p\n",&n);
  return 0;
}
