//Create structure Car with nested Engine details.
#include <stdio.h>

struct Engine{
  int power;
  char intake[20];
};

struct Car{
  char carname[50];
  struct Engine eng;
};

int main(){
  struct Car c;
  struct Engine eng;
  printf("Enter car name:\n");
  scanf("%s",c.carname);
  printf("Enter car engine details:\n");
  printf("Enter power:\n");
  scanf("%d",&c.eng.power);
  printf("Enter intake fuel:\n");
  scanf("%s",c.eng.intake);
  printf("Carname:%s\nEngine power:%d\nEngine Intake fule:%s\n",c.carname,c.eng.power,c.eng.intake);
  return 0;
}
