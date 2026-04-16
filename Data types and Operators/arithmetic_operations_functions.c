//identifiers and keywords example
#include <stdio.h>

int add(int n1, int n2){
  return n1 + n2;
}
int sub(int n1, int n2){
  return n1 - n2;
}
int mul(int n1, int n2){
  return n1 * n2;
}
int div(int n1, int n2){
  return n1 / n2;
}

int main(){
  int r1 = add(10,5);
  int r2 = sub(250,75);
  int r3 = mul(10,20);
  int r4 =div(500,20);
  printf("Addition = %d\n",r1);
  printf("Subtraction = %d\n",r2);
  printf("Multiplication = %d\n",r3);
  printf("Divition = %d\n",r4);
  return 0;
}
