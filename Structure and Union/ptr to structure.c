//Use pointer to structure to access members
#include <stdio.h>
#include <string.h>
  struct hairstyle{
    char style1[30];
    char style2[30];
    char style3[30];
  };
int main(){
  struct hairstyle h;
  //declare pointer
  struct hairstyle *hair;
  hair = &h;
  printf("Enter style1:\n");
  scanf("%s",hair->style1);
  printf("Enter style2:\n");
  scanf("%s",hair->style2);
  printf("Enter style3:\n");
  scanf("%s",hair->style3);
  
  strcpy(hair->style3,"mullet");
  printf("updated style3:%s\n",hair->style3);
  return 0;
}
