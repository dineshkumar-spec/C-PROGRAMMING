//List and explain the different types of tokens in C with examples
/* 1.keywords - reserved specific words with predefined meaning
   2.identifiers - variable names 
   3.constants - fixed values 
   4.operators - arithmetic,logica,relational 
   5.strings - "hello" within double quotes
   6.special symbols - ,{}[]().*/

#include <stdio.h>
int main(){
  int num1;
  int num2;
  float pi = 3.14;
  char name[] = "Dinesh";
  printf("%s\n",name);
  printf("Enter 1st number:\n");
  scanf("%d",&num1);
  printf("Enter 2nd number:\n");
  scanf("%d",&num2);
  printf("Addition of 2 numbers and  pi value = %f\n",num1+num2+pi);
  printf("Program Executed\n");
  return 0;
}
