//Create a structure Date (day, month, year) and print in format: DD/MM/YYYY
#include <stdio.h>
   typedef struct{
    int day;
    int month;
    int year;
  }date;
int main(){
  date d;
  printf("Enter day:\n");
  scanf("%d",&d.day);
  printf("Enter month:\n");
  scanf("%d",&d.month);
  printf("Enter year:\n");
  scanf("%d",&d.year);
  printf("%d/%d/%d\n",d.day, d.month, d.year);
  return 0;
}
