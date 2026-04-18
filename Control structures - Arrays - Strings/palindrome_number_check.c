//7.Check whether a number is palindrome
//Example: 121 → Palindrome
#include <stdio.h>
int main(){
  int num,rem,rev=0,original;
  printf("Enter number:\n");
  scanf("%d",&num);
  original = num;

  while(num!=0){
    rem = num%10;
    rev = rev*10 + rem;
    num/=10;
  }
  if(original == rev)
    printf("Given number is Palindrome\n");
  else
    printf("Given number is not a palindrome\n");
  return 0;
}
