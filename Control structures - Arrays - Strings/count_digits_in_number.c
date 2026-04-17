//9.Count digits in a number.
//Example: 56789 → 5 digits
#include <stdio.h>
int main(){
  int num,count=0;
  printf("Enter a number:\n");
  scanf("%d",&num);

  if(num==0)  //case 0
    count = 1;

  while(num!=0){
    num = num/10;
    count++;
  }
  printf("Total digits in a number is %d\n",count);
  return 0;
}
