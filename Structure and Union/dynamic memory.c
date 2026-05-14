//Create dynamic memory for structure using malloc.
#include <stdio.h>
#include <stdlib.h>
struct employee{
  int id;
  char name[30];
  float salary;
};
int main(){
  //malloc declaration
  struct employee *ptr = (struct employee*)malloc(sizeof(struct employee));
  //null condition
  if(ptr == NULL){
    printf("Memory insufficient!");
    return 1;
  }
  //user i/p
  printf("Enter id:\n");
  scanf("%d",&ptr->id);
  printf("Enter name:\n");
  scanf("%s",ptr->name);
  printf("Enter salary:\n");
  scanf("%f",&ptr->salary);
  //o/p
  printf("Id=%d\nName=%s\nSalary=%.2f\n",ptr->id,ptr->name,ptr->salary);
  //memory return 
  free(ptr);
  return 0;
}
