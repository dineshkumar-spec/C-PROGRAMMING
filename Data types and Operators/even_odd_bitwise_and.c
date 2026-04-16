 //29.Implement a program that checks if a number is even or odd using the bitwise AND operator.
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  if(num & 1)
	printf("Odd number\n");
  else
	printf("Even number\n");
  return 0;
}

