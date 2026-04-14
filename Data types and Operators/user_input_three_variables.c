//22.Implement a program that accepts user input for three variables and prints their values.
#include <stdio.h>
int main(){
  int num1;
  int num2;
  int num3;
  printf("Enter num1:");
  scanf("%d",&num1);
  printf("Enter num2:");
  scanf("%d",&num2);
  printf("Enter num3:");
  scanf("%d",&num3);
  printf("num1 = %d, num2 = %d, num3 = %d\n",num1,num2,num3);
  return 0;
}
