//21.Write a program to calculate the square of a number using a variable and assign the result to another variable
#include <stdio.h>
int main(){
  int num;
  printf("Enter number:");
  scanf("%d",&num);
  int result = num * num;
  int sq = result;
  printf("square of a number is %d\n",sq);
  return 0;
}
