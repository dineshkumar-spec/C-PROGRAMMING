/*Create a union with:
• int
• float
• char
Assign values one by one and observe output.*/
#include <stdio.h>
#include <string.h>
union student{
  int id;
  float marks;
  char name[30];
};
int main(){
  union student u;
  u.id = 10;
  u.marks = 100;
  strcpy(u.name,"Dinesh");
  printf("Id	:%d\nMarks	:%.2f\nName	:%s\n",u.id,u.marks,u.name);
  return 0;
}
