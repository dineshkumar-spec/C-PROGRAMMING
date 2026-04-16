//23.Explain the difference between #define and const with examples.
/*#define is a preprocessor directive used to define a constant or macro name that is replaced by its value 
  before the program is compiled.
  const is a keyword used to declare a variable whose value cannot be changed during program execution.*/

#define NAME "Dineshkumar"
#define A 456
#define GRADE 'D'
#include <stdio.h>
int main(){
  const float mark = 79.92;
  printf("Name is %s\n",NAME);
  printf("value of defined value %d\n",A);
  printf("Mark using const is %f\n",mark);
  printf("grade is %c\n",GRADE);
  return 0;
}
