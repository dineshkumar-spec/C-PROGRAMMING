/*Use the same implementation for menu navigation: 
Main 
Settings 
Sensor 
BACK 
BACK should return to the previous screen. */
#include <stdio.h>
#include <string.h>
#define size 10
char stack[][20];
int top = -1;

void push(char menu[]){
  if(top == size - 1){
    printf("stack overflow\n");
    return;
  }
  top++;
  strcpy(stack[top],menu); 
}

void pop(){
  if(top == -1){
    printf("Already at main menu\n");
    return;
  }
  top--;
}

void current_screen(){
  printf("\ncurrent screen:%s\n",stack[top]);
}

int main(){
  int choice;
  push("Main");
  do{
    current_screen();

    printf("1.Settings\n");
    printf("2.Sensors\n");
    printf("3.Back\n");
    printf("4.Exit\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
	      push("Settings");break;
      case 2:
	      push("Sensor");break;
      case 3:
	      pop();break;
      case 4:
	      printf("Exiting....!\n");break;
      default:
	      printf("Invalid choice\n");
    }
  }while(choice!=4);
  return 0;
}
