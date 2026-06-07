/*Register Swap Simulation
Write a program to swap two variables declared using the register keyword. Does using
register guarantee better performance compared to auto? Explain*/

/*The program correctly swaps two register variables using a temporary variable. 
However,using register does not guarantee better performance than auto, because it is only a suggestion to the compiler. 
Modern compilers usually perform their own optimizations and may ignore the register keyword.*/
#include <stdio.h>
int main(){
  register int a = 100;
  register int b = 50;
  register int temp;
  
  printf("Before swapping:a = %d, b = %d\n",a,b);
  temp = a;
  a = b;
  b = temp;
  printf("After swapping:a = %d, b = %d\n",a,b);
  return 0;
}
