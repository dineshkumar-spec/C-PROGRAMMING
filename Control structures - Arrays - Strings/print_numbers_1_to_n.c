//4.Print numbers from 1 to N using for loop.
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
    printf("%d ,",i);
  }
  return 0;
}
