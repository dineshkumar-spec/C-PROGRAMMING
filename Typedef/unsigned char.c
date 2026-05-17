/*Create a typedef for unsigned char named u8.
Print size and use it in a program*/
#include <stdio.h>
  typedef unsigned char u8;
int main(){
  u8 num;
  printf("Enter a number:\n");
  scanf("%hhu",&num);
  printf("value of num = %u\n",num);
  printf("size of num is %zu\n",sizeof(u8));
  return 0;
}
