//19.Check whether a string is palindrome
//Example: "madam" → palindrome
#include <stdio.h>
#define N 1000
int main(){
  char str[N];
  int i,len=0,flag=1;
  printf("Enter sentence:\n");
  fgets(str,N,stdin);

//length
  for(i=0;str[i]!='\0';i++){
    len++;
  }

//remove newline
  if(str[len-1] == '\n'){
    str[len-1] = '\0';
    len--;
  }

//check palindrome
  for(i=0;i<len/2;i++){
    if(str[i]!=str[len-i-1]){
      flag = 0;
      break;
    }
  }

  if(flag==1){
    printf("Given string is Palindrome\n");}
  else
    {printf("Given string is not palindrome\n");
  }
  return 0;
}
//if scanf is not used means there is no need for remove newline and change fgets to scanf
