/*Create typedef for pointer to integer:
typedef int* intptr;
Use it in a swap program*/
#include <stdio.h>
  typedef int *intptr;
int main(){
  int x = 10, y = 5;
  intptr a = &x;
  intptr b = &y;
  printf("Before swapping: a = %d , b = %d\n",*a,*b);
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  printf("After swapping: a = %d , b = %d\n",*a,*b);
  return 0;
}
