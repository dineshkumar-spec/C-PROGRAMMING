//Print size of union and structure and compare
#include <stdio.h>
struct size1{
  int id;
  char name;
  float value;
};

union size{
  int id;
  char name;
  float value;
};

int main(){
  struct size1 s;
  union size u;
  printf("size of structure:%zu\n",sizeof(s));
  printf("size of union:%zu\n",sizeof(u));
  return 0;
}
