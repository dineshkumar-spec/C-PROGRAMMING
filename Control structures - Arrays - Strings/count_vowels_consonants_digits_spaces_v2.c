/*Count:
• vowels
• consonants
• digits
• spaces
in a given string*/
#include <stdio.h>
#define N 1000
int main(){
  char str[N];
  int i;
  int count_vow=0,count_con=0,count_dig=0,count_spac=0;
  
  printf("Enter sentence:\n");
  //scanf("%s",str);
  fgets(str,N,stdin);
  
  for(i=0;str[i]!='\0';i++){
      char ch = str[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     {
      count_vow++;}
    else if((ch>='a'&& ch<='z')||(ch>='A'||ch<='Z')){
      count_con++;}
    else if(ch>='0' && ch<='9'){
      count_dig++;}
   else if(ch==' '){
      count_spac++;}
  }
  printf("count of vowels %d\n",count_vow);
  printf("count of consonants %d\n",count_con);
  printf("count of digits %d\n",count_dig);
  printf("count of space %d\n",count_spac);
  return 0;
}
