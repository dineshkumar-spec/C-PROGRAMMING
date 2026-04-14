//24.Write a program to calculate the area of a circle using a constant value for π.
#include <stdio.h>
#include <math.h>
int main(){
  const float pi = 3.14;
  int radius;
  printf("Enter radius:");
  scanf("%d",&radius);
//  float area = (pi*radius*radius);
  printf("Area of a circle = %f\n",pi*pow(radius,2));
  return 0;
}
