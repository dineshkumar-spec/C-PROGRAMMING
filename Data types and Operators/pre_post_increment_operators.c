//27.Write a program to demonstrate the difference between pre-increment and post-increment operators
#include <stdio.h>
int main(){
  int a = 5;
  int b = 10;
  a++;
  b++;
  printf("%d\n",a);
  printf("%d\n",b);
  --a;
  --b;
  printf("%d\n",a);
  printf("%d\n",b);
  ++a;
  ++b;
  printf("%d\n",a);
  printf("%d\n",b);
  a--;
  b--;
  printf("%d\n",a);
  printf("%d\n",b);
  return 0;
}
