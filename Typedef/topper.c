//Store 5 students using typedef structure and find topper.
#include <stdio.h>
typedef struct{
  int rollno;
  char name[30];
  float marks;
}top;
int main(){
  top t[5],temp;
  for(int i=0;i<5;i++){
    printf("Detail of student:%d\n",i+1);
    printf("Enter rollno:\n");
    scanf("%d",&t[i].rollno);
    printf("Enter name:\n");
    scanf("%s",t[i].name);
    printf("Enter marks:\n");
    scanf("%f",&t[i].marks);
  }

  printf("Topper Student\n");
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(t[i].marks < t[j].marks){
        temp = t[i];
        t[i] = t[j];
	t[j] = temp;
      }
    }
  }

    printf("Rollno = %d\nName = %s\nMarks = %.2f\n",t[0].rollno,t[0].name,t[0].marks);
  return 0;
}
