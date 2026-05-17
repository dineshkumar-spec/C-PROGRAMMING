//Create typedef for unsigned short, unsigned int, unsigned long as: u16, u32, u64
#include <stdio.h>
  typedef unsigned short u16;
  typedef unsigned int u32;
  typedef unsigned long u64;
int main(){
  u16 num1 = 80;
  u32 num2 = 678359;
  u64 num3 = 636363574;
  printf("num1 = %hu\nnum2 = %u\nnum3 = %lu\n",num1,num2,num3);
  return 0;
}
