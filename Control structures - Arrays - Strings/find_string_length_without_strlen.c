 //18.Write your own function to find length of string (without strlen)
#include <stdio.h>
#define N 1000
int main(){
  int i,count=0;
  char str[N];

  printf("Enter sentence:\n");
  fgets(str,N,stdin);

  for(i=0;i<str[i]!='\0';i++){
    count++;
  }

  printf("length of string is %d\n",count);
  return 0;
}
