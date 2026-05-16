//Show size difference between structure and union
#include <stdio.h>
struct student1{
  int id;
  char name[30];
  float mark;
};

union student2{
  int id;
  char name[30];
  float mark;
};
int main(){
  struct student1 s;
  union student2 u;
  printf("size of structure is %zu\n",sizeof(s));
  printf("size of union is %zu\n",sizeof(u));
  return 0;
}
