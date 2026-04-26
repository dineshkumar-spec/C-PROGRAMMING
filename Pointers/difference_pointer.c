//3.Write a program showing difference between:x &x *p
#include <stdio.h>
int main(){
  int x;
  int *p = &x;
  printf("Enter a number:\n");
  scanf("%d",&x);
  printf("value of x %d\n",x);
  printf("address of x %p\n",&x);
  printf("value of *p %d\n",*p);
  return 0;
}
