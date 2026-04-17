/*Count:
• vowels
• consonants
• digits
• spaces
in a given string*/
#include <stdio.h>
int main(){
  char str[1000];
  int i,vowels=0,cons=0,digits=0,space=0;
  printf("Enter sentence:\n");
  fgets(str,1000,stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
       str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                     vowels++;}
    else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                     cons++;}
    if(str[i]>='0' && str[i]<='9'){
                     digits++;}
    if(str[i]==' '){
                     space++;}
  }

  printf("vowels = %d\n",vowels);
  printf("consonants = %d\n",cons);
  printf("digits = %d\n",digits);
  printf("space = %d\n",space);
  return 0;
}
