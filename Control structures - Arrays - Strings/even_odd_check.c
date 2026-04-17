//1.Write a program to check whether a number is even or odd
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  if(num%2==0)
    printf("Entered number is Even\n");
  else
    printf("Entered number is Odd\n");
  return 0;
}
