//12.Write a function to reverse a number and return it
#include <stdio.h>
int rev(int num);
int main(){
  int num,result;
  printf("Enter a number:\n");
  scanf("%d",&num);
  result = rev(num);
  printf("Reverse of a numbers %d\n",result);
  return 0;
}

int rev(int num){
  int rem,reverse=0;
  while(num!=0){
  rem = num%10;
  reverse = reverse * 10 + rem;
  num = num / 10;
  }
  return reverse;
}
