//Create union inside a structure and print values
#include <stdio.h>
union stu{
  float mark;
};
struct student{
  int id;
  char name[30];
  union stu u;
};
int main(){
  struct student s;
  printf("Enter id:\n");
  scanf("%d",&s.id);
  printf("Enter name:\n");
  scanf("%s",s.name);
  printf("Enter mark:\n");
  scanf("%f",&s.u.mark);
  printf("Id	:%d\nName	:%s\nMark	:%.2f\n",s.id,s.name,s.u.mark);
  return 0;
}
