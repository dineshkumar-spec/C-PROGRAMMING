//Reverse string using pointer swapping
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  char *start, *end, temp;
  printf("Enter sentence:\n");
  fgets(str,sizeof(str),stdin);
  int len = strlen(str);
  
  //remove \n value
  if(str[len-1]=='\n'){
    str[len - 1]='\0';
    len--;
  }
 
  start = str;
  end = str + len - 1;	//str points to address of first element 
  while(start < end){
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
  printf("Reversed string is %s:\n",str);
  return 0;
}
