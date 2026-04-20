//5.Write a function to find maximum of two numbers
#include <stdio.h>
void max(int n1,int n2){
  if(n1>n2)
  printf("1st number is Max = %d\n",n1);
  else
  printf("2nd number is Max = %d\n",n2);
}

int main(){
  int num1,num2;
  printf("Enter 1st number:\n");
  scanf("%d",&num1);
  printf("Enter 2nd number:\n");
  scanf("%d",&num2);
  max(num1,num2);
  
  return 0;
}

/*#include <stdio.h>
void max(int n1,int n2,int *maxnum){
    *maxnum = (n1>n2)?1:0;
}
int main(){
    int num1,num2, maxnum;
    printf("Enter 1st number:\n");
    scanf("%d",&num1);
    printf("Enter 2nd number:\n");
    scanf("%d",&num2);
    max(num1,num2,&maxnum);
    if(maxnum)
    printf("1st number is max\n");
    else
    printf("2nd number is max\n");
    return 0;
}
if we use int use return in function and assign maxnum = max(num1,num2);
*/
