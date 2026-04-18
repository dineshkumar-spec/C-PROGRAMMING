//8.Print multiplication table of a number using loop
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  int i=1;
  for(i=1;i<=16;i++){
    printf("%d * %d = %d\n",num,i,num*i);
  }
  return 0;
}
