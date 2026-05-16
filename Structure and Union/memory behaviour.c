//Demonstrate memory sharing behavior of union
#include <stdio.h>
#include <string.h>
union share{
  int num;
  float value;
  char name[20];
};
int main(){
  union share u;
  u.num = 45;
  printf("value storing in num:\n");
  printf("num = %d\n",u.num);
  printf("value = %f\n",u.value);
  printf("name = %s\n",u.name);
  
  u.value = 68.75;
  printf("value storing in value:\n");
  printf("num = %d\n",u.num);
  printf("value = %f\n",u.value);
  printf("name = %s\n",u.name);
  
  strcpy(u.name,"Dinesh");
  printf("value storing in name:\n");
  printf("num = %d\n",u.num);
  printf("value = %f\n",u.value);
  printf("name = %s\n",u.name);
  return 0;
}
