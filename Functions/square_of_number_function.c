//3.Write a function to find square of a number and return it
#include <stdio.h>
int sq(int num){
  return num*num;
}
int main(){
  int num,result;
  printf("Enter a number:\n");
  scanf("%d",&num);
  result = sq(num);
  printf("Square of a number:%d\n",result);
  return 0;
}
