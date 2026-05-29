#include <stdio.h>
#include <stdlib.h>
#pragma pack(2)
struct packstructure{
  char a;
  int b;
  short c;
};

int main(){
  struct packstructure p;
  printf("size of struct %d\n",sizeof(p));
  return 0;
}
