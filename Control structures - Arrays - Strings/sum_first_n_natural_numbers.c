//5.Print sum of first N natural numbers.
#include <stdio.h>
int main(){
  int num,sum;
  printf("Enter a number:\n");
  scanf("%d",&num);
//  sum = (num*(num+1))/2;
  sum=0;
  for(int i=1;i<=num;i++){
    sum+=i;
  }
  printf("Sum of %d natural numbers are %d\n",num,sum);
  return 0;
}
