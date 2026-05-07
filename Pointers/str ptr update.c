/*Pass structure pointer to function and update values.*/
#include <stdio.h>
struct student {
  int id;
  float mark;
};

void update (struct student *ptr){
  ptr->id += 2;
  ptr->mark += 10;
}
int main(){
  struct student s;
  struct student *ptr = &s;
  printf("Enter id:\n");
  scanf("%d",&ptr->id);
  printf("Enter mark:\n");
  scanf("%f",&ptr->mark);
  update(ptr);
  printf("After update:\n");
  printf("Id=%d\nMark=%.2f\n",ptr->id,ptr->mark);
  return 0;
}
