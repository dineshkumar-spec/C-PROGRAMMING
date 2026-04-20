//10.Write a function to check whether a number is prime
#include <stdio.h>
int isprime(int num);	//function declaration
int main(){
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  if(isprime(n))
  printf("%d is Prime number\n",n);
  else
  printf("%d is not a prime number\n",n);
  return 0;
}

int isprime(int num){ //function definition
  if(num<=1)
    return 0;
  for(int i=2;i*i<=num;i++){
    if(num%i==0)
    return 0;
  }
  return 1;
}
