//Store details of 5 students in an array of structures and display them
#include <stdio.h>
struct student {
  int id;
  char name[50];
  float marks;
};
int main(){
  struct student s[10];  //structure declare
  //inputs
  for(int i=0;i<5;i++){
    printf("Enter students detail:%d\n",i+1);
    printf("Enter Id:\n");
    scanf("%d",&s[i].id);
    printf("Enter Name:\n");
    scanf("%s",s[i].name);
    printf("Enter Marks:\n");
    scanf("%f",&s[i].marks);
  }

  //print outputs 
  printf("\nStudents Details:\n");
  for(int i=0;i<5;i++){
    printf("Id:%d, Name:%s, Marks:%.2f\n",s[i].id, s[i].name, s[i].marks);
  }
  return 0;
}
