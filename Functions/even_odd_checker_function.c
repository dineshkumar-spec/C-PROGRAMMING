//4.Write a function to check whether a number is even or odd.(Return 1 for even, 0 for odd)
#include <stdio.h>

int evenodd(int n){
  if(n%2==0)
  return 1;
  else
  return 0;
  
}

int main(){
  int num,result;
  printf("Enter a number:\n");
  scanf("%d",&num);
  result = evenodd(num);
  if(result)
  printf("Even number\n");
  else
  printf("Odd number\n");
  return 0;
}
