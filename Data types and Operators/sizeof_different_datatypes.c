//9. Write a program that calculates the size of different data types using the sizeof operator
#include <stdio.h>
int main(){
  int a;
  float b;
  char c;
  double d;
  short int e;
  long int f;
  long double g;
  long long int h;
  unsigned int i;
  unsigned long int j;
  unsigned char k;
  signed char l;
  unsigned long long int m;
  printf("int - %zu\n",sizeof(a));
  printf("float - %zu\n",sizeof(b));
  printf("char - %zu\n",sizeof(c));
  printf("double - %zu\n",sizeof(d));
  printf("short int - %zu\n", sizeof(e));
  printf("long int - %zu\n", sizeof(f));
  printf("long double - %zu\n",sizeof(g));
  printf("long long int - %zu\n",sizeof(h));
  printf("unsigned int - %zu\n",sizeof(i));
  printf("unsigned long int - %zu\n",sizeof(j));
  printf("unsigned char - %zu\n",sizeof(k));
  printf("signed char - %zu\n",sizeof(l));
  printf("unsigned long long int - %zu\n",sizeof(m));
  return 0;
}
