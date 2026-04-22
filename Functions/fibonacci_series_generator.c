//14.Write a function to generate Fibonacci series up to N terms
#include <stdio.h>
void generatefibo(int n);
int main(){
  int num;
  printf("Enter number of terms:\n");
  scanf("%d",&num);
  generatefibo(num);
  return 0;
}

void generatefibo(int n){
  int a=0,b=1,c=0;
 
  printf("Fibonacci series:\n");
  for(int i=1;i<=n;i++){
    printf("%d ,",a);
    c=a+b;	//commented means print c
    a=b;
    b=c;
   // c=a+b;
  }
}
