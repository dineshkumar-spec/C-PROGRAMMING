//25.Write a function to count vowels, consonants, digits, and spaces in a string
#include <stdio.h>
#define N 1000
void count(char *str){
  int i,vowels=0,cons=0,digit=0,space=0;
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
       str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='O'){
             vowels++;}
    else if(str[i]>='a' && str[i]<='z'||str[i]>='A'&& str[i]<='Z'){
             cons++;}
    if(str[i]>='0'&&str[i]<='9'){
             digit++;}
    if(str[i]==' '){
             space++;}
  }
  printf("vowels = %d\n",vowels);
  printf("consonants = %d\n",cons);
  printf("digits = %d\n",digit);
  printf("space = %d\n",space);
   
}
int main(){
  char str[N];
  int vowels=0,cons=0,digit=0,space=0;
  printf("Enter sentence:");
  fgets(str,N,stdin);
  count(str);
  return 0;
}
