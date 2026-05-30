#include <stdio.h>
int main(){
  int* p[10] = {0x1000,0x1001,0x1002,0x1003,0x1004};
  int q = 10;
  *(&p[0]+2)=&q;
  printf("%d %x %d %d\n",*p[2],p[1],(&p[2] - &p[0]),p[7] + (&p[2] - &p[0])); 
}
