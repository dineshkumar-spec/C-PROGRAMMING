//Create typedef for a structure Student and declare variable without using struct keyword
#include <stdio.h>
#include <string.h>
typedef struct{
  int id;
  char name[30];
  float mark;
}student;
int main(){
  student d;
  d.id = 10;
  strcpy(d.name,"Dinesh");
  d.mark = 98;
  printf("Id = %d\nName = %s\nMark = %.2f\n",d.id,d.name,d.mark);
  return 0;
}
