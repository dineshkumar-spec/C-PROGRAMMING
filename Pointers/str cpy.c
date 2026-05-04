//Copy string using pointer
#include <stdio.h>
#define N 1000
#define M 1000
void copy(char *dest, char *src){	//dest[],src[] indicates *dest and *src
  while(*dest++ = *src++);
}
int main(){
  char src[N];
  char dest[M];
  printf("Enter sentence:\n");
  fgets(src,N,stdin);
  copy(dest,src);
  printf("copied sentence:%s\n",dest);
  return 0;
}
