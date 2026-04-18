//10.Using switch, create a simple calculator (+, −, *, /).
#include <stdio.h>
int main(){
  char operators;
  int num1,num2;
  printf("Enter operator(+,-,*,/,%%):\n");
  scanf("%c",&operators);
  printf("Enter numbers:\n");
  scanf("%d %d",&num1, &num2);
  switch(operators){
    case '+':
	     printf("%d + %d =%d\n",num1,num2,num1+num2);break;
    case '-':
             printf("%d - %d =%d\n",num1,num2,num1-num2);break;
    case '*':
             printf("%d * %d =%d\n",num1,num2,num1*num2);break;
    case '/':
	     printf("%d / %d =%d\n",num1,num2,num1/num2);break;
    case '%':
	     printf("%d %% %d =%d\n",num1,num2,num1%num2);break;
   default:
	     printf("Operator wrong check please!!!\n");break;
  }
  return 0;
}
