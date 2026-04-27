//6.Create pointer to pointer and print value
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  int *ptr = &num;
  int **dptr = &ptr;
  printf("value of num %d\n",**dptr);
  return 0;
}
