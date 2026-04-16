//18.Write a program to swap two variables using a temporary variable.
#include <stdio.h>
int main(){
int a,b,temp;
a= 10;
b=20;
printf("Before swapping : a = %d | b = %d\n",a,b);
temp = a;
a = b;
b = temp;
printf("After swapping : a = %d | b = %d\n",a,b);
return 0;
}
