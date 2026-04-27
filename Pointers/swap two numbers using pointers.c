//4.Swap two numbers using pointers
#include <stdio.h>
int main(){
  int num1;
  int num2;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  int temp;
  printf("Enter number1:\n");
  scanf("%d",&num1);
  printf("Enter number2:\n");
  scanf("%d",&num2);
  printf("Before swaping num1 = %d, num2 = %d\n",*ptr1,*ptr2);
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("After swaping num1 = %d, num2 = %d\n",*ptr1,*ptr2);
  return 0;
}
