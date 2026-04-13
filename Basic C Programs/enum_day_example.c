#include <stdio.h>
int main(){
  enum day{SUN,MON,TUE,WED,THUR,FRI,SAT}today;//today is a variable type created using enum
  today = THUR;  
printf("%d",today);
  return 0;
}
