#include <stdio.h>
int main(){
  int num1 = 10.89;
  float num2 = 78;
  printf("implicit conversion (float to int)- %d\n", num1);
  printf("implicit conversion (int to float )- %f\n", num2);
  //explicit conversion - manual conversion
  float sum = (int)num1+num2;
  printf("Explicit conversion (converting int to float)%f\n", sum);
  return 0;
}
