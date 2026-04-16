//13.Write a program to convert a floating-point number to an integer using typecasting.
#include <stdio.h>
int main(){
  float num = 34.87;
  int result = (int)num;  //typecasting
  

  int num2 = 450;
  float out = (float)num2;

  printf("float input number is %f\n",num);
  printf("Converted output number is %d\n",result);


  printf("int input number is %d\n",num2);
  printf("converted output number is %f\n",out);
  return 0;
}
