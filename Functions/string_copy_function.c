//23.Write a function to copy one string to another without strcpy().
//char * means:You are passing address of the string (array)
#include <stdio.h>
#define N 1000
void strcopy(char *str1,char *str2){
  int i;
  for(i=0;str1[i]!='\0';i++){
    str2[i] = str1[i];
  }
    str2[i] ='\0';
  //printf("copied string is %s\n",str2);
}
int main(){
  char str1[N];
  char str2[N];
  printf("Enter 1st sentence:\n");
  fgets(str1,N,stdin);

  strcopy(str1,str2);
  printf("copied string is %s\n",str2);
  return 0;
}
