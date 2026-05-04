//Compare two strings using pointer
#include <stdio.h>
#define N 1000
#define M 1000
int equal(char *str2, char *str1){
  while(*str1 != '\0' && *str2 !='\0'){
    if(*str1 != *str2)
      {return 1;}
      str1++;
      str2++;
  }
  if(*str1 == *str2)
    return 0;
  else
    return 1;
    
}
int main(){
  char str1[N];
  char str2[M];
  char *p = str1;
  char *q = str2;
  printf("Enter string1:\n");
  fgets(str1,N,stdin);
  printf("Enter string2:\n");
  fgets(str2,M,stdin);
  if(equal(str2,str1) ==0){
    printf("Strings are equal\n");
  }
  else{
    printf("Strings are not equal\n");
  }
  return 0;
}
