//9.Return multiple values from function using pointers:
//(sum and difference)
#include <stdio.h>
void calculate(int a,int b, int *sum,int *diff){
  *sum = a+b;
  *diff = a-b;
}

int main(){
  int num1,num2,addition,subtraction;
  printf("Enter num1:\n");
  scanf("%d",&num1);
  printf("Enter num2:\n");
  scanf("%d",&num2);
  calculate(num1,num2,&addition,&subtraction);

  printf("Addition of num %d, num %d = %d\n",num1,num2,addition);
  printf("Subtraction of num %d, num %d = %d\n",num1,num2,subtraction);
  return 0;
}
