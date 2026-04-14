//26.Write a program that calculates the compound interest using the += operator.
#include <stdio.h>
int main(){
  float P,R,T,A,CI;
  int i;
  printf("Enter Principle amount:\n");
  scanf("%f",&P);
  printf("Enter Rate of interest:\n");
  scanf("%f",&R);
  printf("Enter Time:\n");
  scanf("%f",&T);

  A = P;	//initialize amount
  for(i=0;i<T;i++){
    A += A*(R/100);
  }
  CI = A - P;
  printf("Total amount is %f\n",A);
  printf("Compound interest is %f\n",CI);
  return 0;
}
