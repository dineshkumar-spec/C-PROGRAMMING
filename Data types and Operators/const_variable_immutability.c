//25.Write a program to demonstrate the immutability of constant variables
#include <stdio.h>
int main(){
  const int year = 2005;
  printf("Const value is %d\n",year);
//  year++;
  printf("Trying to change year value is %d\n",year);
  return 0;
}
/*code_25.c: In function ‘main’:
code_25.c:6:7: error: increment of read-only variable ‘year’
    6 |   year++;
      |       ^~*/
