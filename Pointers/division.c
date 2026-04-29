//10.Write function to calculate quotient and remainder using pointers.
#include <stdio.h>
void calculate(int a,int b, int *q, int *r){
  *q = a/b;
  *r = a%b;
}
int main(){
  int num1,num2,quotient,remainder;
  printf("Enter numbers:\n");
  scanf("%d %d",&num1,&num2);

  calculate(num1,num2,&quotient,&remainder);  //function declaration

  printf("%d / %d = quotient %d\n",num1,num2,quotient);
  printf("%d %% %d = remainder %d\n",num1,num2,remainder);
  return 0;
}
