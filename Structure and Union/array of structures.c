//Create array of structure pointers and print data
#include <stdio.h>
#include <stdlib.h>
struct student{
  int rollno;
  char name[30];
  float marks;
};
int main(){
  struct student *ptr[3];
  for(int i=0;i<3;i++){
    ptr[i] = malloc(sizeof(struct student));

    if(ptr == NULL){
      printf("Memory not sufficient!");
    }
    printf("Detail of student:%d\n",i+1);
    printf("Enter rollno:\n");
    scanf("%d",&ptr[i]->rollno);
    printf("Enter name:\n");
    scanf("%s",ptr[i]->name);
    printf("Enter marks:\n");
    scanf("%f",&ptr[i]->marks);
  }

  printf("Students details\n");
  for(int i=0;i<3;i++){
    printf("student:%d\n",i+1);
    printf("Rollno	:%d\n",ptr[i]->rollno);
    printf("Name	:%s\n",ptr[i]->name);
    printf("Mark	:%f\n",ptr[i]->marks);
  }
  
  for(int i=0;i<3;i++){
    free(ptr[i]);
  }
  return 0;
}
