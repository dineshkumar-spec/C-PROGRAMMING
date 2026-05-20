//Create typedef struct for Student and input/output details
#include <stdio.h>
typedef struct{
  int rollno;
  char name[30];
  float marks;
}Student;
int main(){
  Student s1;
  Student s2;
  printf("Enter student1 rollno:\n");
  scanf("%d",&s1.rollno);
  printf("Enter name of st 1:\n");
  scanf("%s",s1.name);
  printf("Enter marks of st 1:\n");
  scanf("%f",&s1.marks);

  printf("Enter student2 rollno:\n");
  scanf("%d",&s2.rollno);
  printf("Enter name of st 2:\n");
  scanf("%s",s2.name);
  printf("Enter marks of st 2:\n");
  scanf("%f",&s2.marks);
  
  printf("Detail of students\n");
  printf("Rollno:%d\nName:%s\nMarks:%.2f\n",s1.rollno,s1.name,s1.marks);
  printf("Rollno:%d\nName:%s\nMarks:%.2f\n",s2.rollno,s2.name,s2.marks);
  return 0;
}
