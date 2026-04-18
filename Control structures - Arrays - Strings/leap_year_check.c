//3.Write a program to check whether a year is leap year.
#include <stdio.h>
int main(){
  int year;
  printf("Enter year:\n");
  scanf("%d",&year);
  if(year%4==0)
    printf("%d year is leap year\n",year);
  else
    printf("%d year is non leap year\n",year);
  return 0;
}
