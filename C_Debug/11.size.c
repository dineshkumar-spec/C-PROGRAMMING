#include <stdio.h>
#include <string.h>
int main(){
  char s[] = "Hello\0Hi";
  printf("%d %d",strlen(s), sizeof(s));
  return 0;
}
