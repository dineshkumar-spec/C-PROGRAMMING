//8.Write a function that takes a number and prints its multiplication table
#include <stdio.h>

void table(int n){
  int i = 1;

  for(i=1;i<=16;i++){
    printf("%d * %d = %d\n",n,i,n*i);
  }
}
int main(){
  int num;
  printf("Enter table number:\n");
  scanf("%d",&num);
  table(num);
  return 0;
}

