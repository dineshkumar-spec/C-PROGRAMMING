//Will the following code compile in standard C? Explain why or why not.
//static int a = some_other_variable;
#include <stdio.h>
//#define some_other_variable 5
int main(){
  
  static int a = some_other_variable;
  printf("%d\n",a);
  return 0;
}

//using enum,define,value declaration is standard, otherwise not standard.
// compile time - constant value shoult be defined 
//normal variable - runtime not supported in static
