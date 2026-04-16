//16.Define variables in C. Write a program to declare and initialize variables of different types.
#include <stdio.h>
int main(){
  int a = 10;
  float b = 5;
  char c = 'K';
  double d = 76.65;
  short int e = 3;
  long int f = 345;
  unsigned int g = 874;
  unsigned long int h = 23456;
  long double i = 3456.4523;
  unsigned long long int j = 2345672;
  signed char k = 'a';
  unsigned char l = 'z';
  long long int m = 876453;

  printf("int = %d\n",a);
  printf("float = %f\n",b);
  printf("char = %c\n",c);
  printf("double = %lf\n",d);
  printf("short int = %u\n",e);
  printf("long int = %ld\n",f);
  printf("unsigned int = %u\n",g);
  printf("unsigned long int = %lu\n",h);
  printf("long double = %Lf\n",i);
  printf("unsigned long long int = %llu\n",j);
  printf("signed char = %c\n",k);
  printf("unsigned char = %cu\n",l);
  printf("long long int %lld\n",m);
  return 0;
}
