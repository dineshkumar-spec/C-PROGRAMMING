/*Create structure Sensor:
• value
• unit (enum TEMP/PRESSURE/HUMIDITY)*/
#include <stdio.h>
enum unit {TEMP,PRESSURE,HUMIDITY};

struct Sensor{
  int value;
  enum unit u;
};
int main(){
  struct Sensor s;
  printf("Enter value of sensor:\n");
  scanf("%d",&s.value);
  printf("Enter temp-0 pressure-1 humidity-2:\n");
  scanf("%d",(int *)&s.u);
  printf("Value = %d\n",s.value);
  if(s.u == TEMP)
	printf("Unit is TEMP\n");
  else if(s.u == PRESSURE)
	printf("Unit is PRESSURE\n");
  else if(s.u == HUMIDITY)
	printf("Unit is HUMIDITY\n");
  else
	printf("Invalid unit\n");
  return 0;
}
