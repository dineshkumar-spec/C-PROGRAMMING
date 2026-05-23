//Create union inside structure and assign values
#include <stdio.h>
#include <string.h>
union rank{
  int value;
  //char name[20];
};

struct student{
  int id;
  float mark;
  union rank u;
};

int main(){
  struct student s = {30,98,{1}};
  //s.u.value = 1;
  //strcpy(s.u.name,"Dinesh");
  printf("Id = %d\n",s.id);
  printf("Mark = %.2f\n",s.mark);
  printf("Rank = %d\n",s.u.value);
  //printf("Name = %s\n",s.u.name);
  return 0;
}
