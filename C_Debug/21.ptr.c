#include <stdio.h>
void main(){
  int i = 10;
  int * ip = &i;
  int **ipp = &&i;
  printf("%x,%x,%x",&i,ip,*ipp);
}
