//5.Write a function that modifies a variable using pointer parameter
#include <stdio.h>
void variable(int *ptr){
int n;
printf("enter a number\n");
scanf("%d",&n);  
*ptr = n;
   
}
int main(){
  int num = 100;
  int *ptr = &num;
  printf("value of num = %d\n",num);
  variable(&num);
  printf("value is %d\n",num);
  return 0;
}
