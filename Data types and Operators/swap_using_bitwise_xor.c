//28.Write a program to swap two variables using bitwise XOR operator
#include <stdio.h>
int main(){
  int a = 4;
  int b = 5;
  printf("before swaping a=%d b=%d\n",a,b);
  a = a^b;
  b = a^b;
  a = a^b;
  printf("after swaping a=%d b=%d\n",a,b);
return 0;
}
