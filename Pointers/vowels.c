//Count vowels using pointer traversal
#include <stdio.h>
int main(){
  char str[100];
 
  printf("Enter string:\n");
  fgets(str,sizeof(str),stdin);
  char *ptr = str;
  int vowels=0;
  for(ptr = str;*ptr!='\0';ptr++){
    if(*ptr == 'a'||*ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'){
      vowels++;
    }
  }
  printf("vowels = %d\n",vowels);
  return 0;
}
