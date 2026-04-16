/*5.5. How are comments treated as tokens in C? Write examples for both single-line and multi-line
comments.
Comments in C are not treated as tokens because they are ignored by the compiler during preprocessing.*/
#include <stdio.h>
int main(){
  char name[] = "Dineshkumar";//name
  float mark = 100;//mark
  /*mark and name 
  printing statements*/
  printf("Name : %s\n",name);
  printf("Mark : %f\n",mark);
  return 0;
}
