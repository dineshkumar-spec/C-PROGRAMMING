//Implement call-by-reference increment function
#include <stdio.h>
 void incr(int *n){
  *n = *n + 1; 
  
}
int main(){
   int num;
   printf("Enter a number:\n");
   scanf("%d",&num);
   printf("Before increment of number: %d\n",num);
   incr(&num);
   printf("After increment of number: %d\n",num);
  return 0;
}
