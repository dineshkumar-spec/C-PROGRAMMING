//19.Write a program to calculate the sum and average of three variables using arithmetic operations
#include <stdio.h>
int main(){
  
  int n1,n2,n3;
  
  printf("Enter num1:");
  scanf("%d",&n1);
  printf("Enter num2:");
  scanf("%d",&n2);
  printf("Enter num3:");
  scanf("%d",&n3);
  
  int sum = n1 + n2 + n3;
  int avg = sum/3;
  printf("Sum = %d\n",sum);
  printf("Average of 3 numbers:%d\n",avg);
  return 0;
}
