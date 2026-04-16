//20.Write a program to demonstrate how to modify a global variable within a function
#include <stdio.h>
 int num = 0;
 void myfun(){
  //num = 5;
  num+=1;
  
}
 
 int main(){
  myfun();
  myfun();
  printf("num value after modification %d\n",num);
  return 0;
}
