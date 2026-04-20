//13.Write a function to check palindrome number using another helper function.
//(Hint: use reverse function)
#include <stdio.h>
int rev(int num);
int ispalindrome(int num);
int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  
  if(ispalindrome(num))
    printf("Given number is Palindrome\n");
  else
    printf("Given number is not a palindrome\n");
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
 
int ispalindrome(int num){
   int result = rev(num);
  if(num == result)
    return 1;
  else
    return 0;
}

