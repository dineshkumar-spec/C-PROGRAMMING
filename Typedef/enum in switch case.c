//Use enum in switch case to control menu program
#include <stdio.h>
enum program {STUDY,WRITE,REVISE,REPEAT};
int main(){
  enum program menu;
  int input;
  printf("Enter input 0-study, 1-write, 2-revise, 3-repeat\n");
  scanf("%d",&input);
  menu = input;
  switch (menu){
    case 0:
      printf("Study menu\n");
      break;
    case 1:
      printf("write menu\n");
      break;
    case 2:
      printf("Revise menu\n");
      break;
    case 3:
      printf("Repeat menu\n");
      break;
    default:
      printf("invalid menu!\n");
  }
  return 0;
}
