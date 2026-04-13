#include <stdio.h>
int main(){
  int a = 10;
  float b = 78.4;
  double c = 45.34;
  char d = 'D';
  printf("int = %zu\n", sizeof(a));
  printf("float = %zu\n",sizeof(b));
  printf("double = %zu\n",sizeof(c));
  printf("char = %zu\n",sizeof(d));
  return 0;
}
