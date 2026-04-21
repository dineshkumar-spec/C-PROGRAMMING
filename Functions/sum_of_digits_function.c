//11.Write a function to return sum of digits of a number.
#include <stdio.h>
  int add(int num1,int num2){
    return num1 + num2;
}
int main(){
  int n1,n2,result;
  printf("Enter numbers:\n");
  scanf("%d %d",&n1,&n2);
  result = add(n1,n2);
  printf("Sum of digits are %d\n",result);
  return 0;
}
