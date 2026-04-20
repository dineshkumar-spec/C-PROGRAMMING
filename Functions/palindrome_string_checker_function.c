//24.Write a function to check whether a string is palindrome
#include<stdio.h>
#define N 1000
int ispalindrome(char *str){
  int i,len=0,flag=1;
  //length
  for(i=0;str[i]!='\0';i++){
    len++;
  }
  //remove 1 length \n
  if(str[len-1]=='\n'){
    str[len-1]='\0';
    len--;}
 
  for(i=0;i<len/2;i++){
   if(str[i]!=str[len-i-1]){
    flag = 0;
    break;}
  }
 
   return flag;
}
int main(){
  char str[N];
  int flag=1;
  printf("Enter sentence:\n");
  fgets(str,N,stdin);
  int result = ispalindrome(str);
  if(result)
    printf("given string is palindrome\n");
  else
    printf("given string is not a palindrome\n");
  return 0;
}
