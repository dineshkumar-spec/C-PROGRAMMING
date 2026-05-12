/*Create structure Person with:
• name
• DOB (another structure)
Calculate age.*/
#include <stdio.h>
struct DOB{
  int year;
  int result;
};

struct Person{
  char name[30];
  struct DOB d;
};

int main(){
  struct Person p;

  printf("Enter Name of person:\n");
  scanf("%s",p.name);
  printf("Enter year of birth:\n");
  scanf("%d",&p.d.year);
  p.d.result = 2026 - p.d.year;
  printf("Age of person is %d\n",p.d.result);
  return 0;
}
