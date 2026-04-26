//Declare an integer variable and print its address using pointer
#include <stdio.h>
int main(){
  int num;
  int *ptr = &num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  printf("Address of num using pointer %p\n",ptr);
  return 0;
}
