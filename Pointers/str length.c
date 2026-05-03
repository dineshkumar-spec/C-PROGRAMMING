//Find string length using pointer (no strlen)
#include <stdio.h>
#define N 1000
void length(char *s){
  char *ptr = s;
  int len=0;
  for(ptr = s;*ptr!='\0';ptr++){
    len++;
  }
  if(s[len-1]=='\n'){
    s[len-1] = '\0';
    len--;
  }
printf("length %d\n",len);
}
int main(){
  char str[N];
  char *ptr = str;
  printf("Enter sentence:\n");
  fgets(str,N,stdin);
  length(str);
  return 0;
}
