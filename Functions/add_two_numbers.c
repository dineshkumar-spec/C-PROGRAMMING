//2.Write a function int add(int a, int b) to return sum of two numbers.
#include <stdio.h>

int add(int a, int b){
  return a + b;
}
int main(){
  int sum = add(5,5);
  printf("Sum of two numbers:%d\n",sum);
  return 0;
}
