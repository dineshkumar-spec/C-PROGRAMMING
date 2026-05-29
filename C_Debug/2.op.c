#include <stdio.h>
int main(){
  int a[10] = {0};
  printf("%d\n",(int)(&a+1) - (int)&a);
  return 0;
}
