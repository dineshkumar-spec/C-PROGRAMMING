//Write a program to calculate average marks of students using structure array.
#include <stdio.h>
struct studentmarks{
  int rollno;
  char name[50];
  int mark1, mark2, mark3, mark4, mark5;
  float avg;
};
int main(){
  struct studentmarks s[3];
  for(int i=0;i<3;i++){
    printf("Enter details of student:%d\n",i+1);
    printf("Enter rollno:\n");
    scanf("%d",&s[i].rollno);
    printf("Enter name:\n");
    scanf("%s",s[i].name);
    printf("Enter mark1:\n");
    scanf("%d",&s[i].mark1);
    printf("Enter mark2:\n");
    scanf("%d",&s[i].mark2);
    printf("Enter mark3:\n");
    scanf("%d",&s[i].mark3);
    printf("Enter mark4:\n");
    scanf("%d",&s[i].mark4);
    printf("Enter mark5:\n");
    scanf("%d",&s[i].mark5);
    s[i].avg = (s[i].mark1 + s[i].mark2 + s[i].mark3 + s[i].mark4 + s[i].mark5)/5;
  }

  printf("\nStudents mark\n");
  for(int i=0;i<3;i++){
    printf("Details of student:%d\n",i+1);
    printf("Rollno:%d, Name:%s, Mark1=%d, Mark2=%d, Mark3=%d, Mark4=%d, Mark5=%d\n",
    s[i].rollno,s[i].name,s[i].mark1,s[i].mark2,s[i].mark3,s[i].mark4,s[i].mark5);
    printf("%.2f is average marks\n",s[i].avg);
  }
  
  return 0;
}
