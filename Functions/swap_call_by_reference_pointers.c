//7.Modify above program to swap using call by reference (pointers).
//6.Write a function to swap two numbers using call by value.
//Check whether values change in main() or not
#include <stdio.h>
void  swaping(int *n1, int *n2, int *temp){
  printf("Before swaping n1=%d | n2=%d\n",*n1,*n2);
  *temp=*n1;
  *n1 = *n2;
  *n2 = *temp;
  printf("After swaping n1=%d | n2=%d\n",*n1,*n2);
}

int main(){
  int num1,num2,temp;
  printf("Enter number1:\n");
  scanf("%d",&num1);
  printf("Enter number2:\n");
  scanf("%d",&num2);
  printf("Before swaping n1=%d | n2=%d\n",num1,num2);
  swaping(&num1,&num2,&temp);
  printf("After swaping n1=%d | n2=%d\n",num1,num2);
  return 0;
}
