#include <stdio.h> //header file
#define PI 3.14    //define macros 
int main() {       //int main for return type and communicate to os
int radius;        //declare variable radius
float area;        //declare area as variable
char unit;         // declare unit as variable
//print the radius in monitor
printf("Enter radius of circle: ");
//user input typed 
scanf("%d", &radius);
//measurement will print
printf("Enter unit of measurement (e.g., c for cm): ");
scanf(" %c", &unit); //user input typed
area = PI * (float)(radius * radius);  //area formula
printf("Size of float variable: %lu bytes\n", sizeof(area)); //area size is known
//if area value higher than 0, area printed otherwise else part printed
if (area > 0) {
printf("Area = %.2f %c%c\n", area, unit, 178);
} else {
printf("Invalid radius entered.\n");
}
return 0;
}
