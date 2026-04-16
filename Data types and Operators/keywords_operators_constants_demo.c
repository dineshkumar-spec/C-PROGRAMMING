//6. Write a program to demonstrate the use of keywords, operators, and constants in a single program
#include <stdio.h>
int main(){
  int num1 = 20.54;
  float num2 = 98;
  float value = num1 / num2;
  float const num3 = 100;
  printf("value = %f\n",value);
  printf("adding const value  %f\n",num3 + value);
  return 0;
}
