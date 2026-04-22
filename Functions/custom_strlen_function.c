//22.Write your own function my_strlen() to calculate string length.
#include <stdio.h>
#define N 1000
void mystrlen(char str[]){
  int i,len=0;
//claculate length upto '\0'
  for(i=0;str[i]!='\0';i++){
    len++;
  }
//remove 1 ch space for \n becaus of using fgets 
  if(str[len-1]=='\n'){
    len--;
  }
  printf("length of string is %d\n",len);
}
int main(){
  char str[N];
  printf("Enter sentence:\n");
  fgets(str,N,stdin);
  mystrlen(str);
  return 0;
}
