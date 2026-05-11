/*Create nested structure:
struct Address
struct Student (contains Address)
Store and print full student details*/
#include <stdio.h>
struct Address {
  char place[30];
};

struct Student{
  int rollno;
  char name[20];
  struct Address add;
};
int main(){
  struct Address add;
  struct Student s;

  printf("Enter place:\n");
  scanf("%s",s.add.place);
  printf("Enter rollno:\n");
  scanf("%d",&s.rollno);
  printf("Enter name:\n");
  scanf("%s",s.name);
  printf("Detail of student\n");
  printf("Rollno: %d\nName:%s\nAddress:%s\n",s.rollno,s.name,s.add.place);
  return 0;
}
