#include <stdio.h>
int* returnvalue()
{
  static int i = 5;
  printf("%d",i);
  return &i;
}

int main(){
  int* a=returnvalue();
  ++(*a);
  printf("%d",*a);
  a=returnvalue();
  ++(*a);
  printf("%d",*a);
  return 0;
}
