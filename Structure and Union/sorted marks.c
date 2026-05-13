//Sort students by marks using structure array.
#include <stdio.h>
#include <string.h>
struct student{
  int rollno;
  char name[30];
  float mark;
};

int main(){
struct student s[3],temp;

for(int i=0;i<3;i++){
  printf("Detail of student:%d\n",i+1);
  printf("Enter rollno:\n");
  scanf("%d",&s[i].rollno);
  printf("Enter name:\n");
  scanf("%s",s[i].name);
  printf("Enter mark:\n");
  scanf("%f",&s[i].mark);
}
//ascending
  for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
      if(s[i].mark < s[j].mark){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
      }
    }
  }

//printing
  printf("sorted marks:\n");
  for(int i=0;i<3;i++){
    printf("student	:%d\n",i+1);
    printf("Rollno	:%d\n",s[i].rollno);
    printf("Name	:%s\n",s[i].name);
    printf("Mark	:%.2f\n",s[i].mark);
  }
  return 0;
}

