//.Explain the difference between signed and unsigned data types with examples
//signed data type include -ve numbers it have 1 bit signed and others for values 
//unsigned data type include only +ve numbers no signed bits 
#include <stdio.h>
int main(){
  signed int a = -45;
  unsigned int b = 294;
  printf("signed int  %d\n",a);
  printf("unsigned int  %u\n",b);
  return 0;
}
