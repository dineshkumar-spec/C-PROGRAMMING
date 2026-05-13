//Search student by ID
#include <stdio.h>
struct student{
  int id;
  char name[30];
  float mark;
};
int main(){
  struct student s[3];
  int searchid, found;
  for(int i=0;i<3;i++){
    printf("student:%d\n",i+1);
    
    printf("Enter id:\n");
    scanf("%d",&s[i].id);
    
    printf("Enter name:\n");
    scanf("%s",s[i].name);

    printf("Enter mark:\n");
    scanf("%f",&s[i].mark);
  }
    
    printf("Enter search id:\n");
    scanf("%d",&searchid);

   for(int i=0;i<3;i++){
     if(s[i].id == searchid){
       printf("Student found\n");
       printf("Id	:%d\n",s[i].id);
       printf("Name	:%s\n",s[i].name);
       printf("Mark	:%.2f\n",s[i].mark);
       found = 1;
       break;
     }
   }
   if(found ==0){
     printf("Student not found\n");
   }
  return 0;
}
