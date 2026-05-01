//Write function to reverse number using pointer argument.
#include <stdio.h>
void reverse(int *ptr){
  int rev = 0,rem;
  while(*ptr!=0){
    rem = *ptr % 10;
    rev = rev * 10 + rem;
    *ptr = *ptr/10;
  }
    printf("Reverse of number %d\n",rev);
}
int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  reverse(&num);
  return 0;
}
