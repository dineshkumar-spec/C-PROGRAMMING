//9.Write a function to calculate factorial of a number
#include <stdio.h>
int factorial(int n){
  int i;
  for(i=1;i<=n;i++){
  return n * factorial(n-1);
  }
  
}

int main(){
  int num,result;
  printf("Enter a number:\n");
  scanf("%d",&num);
   result = factorial(num);
  printf("Factorial is %d\n",result);
  return 0;
}
