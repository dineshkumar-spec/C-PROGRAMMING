/*6: Circular Queue → UART Receive Buffer 
Part A: 
Implement Circular Queue operations: 
 Insert  
 Delete  
 Display*/
/*Part B: 
Use the same implementation with UART receiver and store incoming bytes continuously. 
Commands: 
LEDON 
STATUS 
TEMP */

#include <stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;
void insert(){
  int num;
  if((rear+1)%size == front){
    printf("queue is overflow\n");
    return;
  }
  printf("Enter number:\n");
  scanf("%d",&num);

  if(front == -1){
    front = rear = 0;
  }
  else
  {
    rear = (rear+1)%size;
  }
  queue[rear] = num;
  printf("%d inserted number\n",num);
}

void delete(){
  if(front == -1){
    printf("queue is underflow\n");return;
  }
  printf("%d removed front\n",queue[front]);
  if(front == rear){
    front = rear = -1;
  }
  else
  {
    front = (front+1)%size;
  }
}

void display(){
  int i;
  if(front == -1){
    printf("queue is empty\n");return;
  }
  printf("queue elements\n");
  i = front;
  while(1){
    printf("%d ",queue[i]);
    if(i == rear)
      break;
    i = (i+1)%size;
  }
  printf("\n");
}

int main(){
  int choice;
  do{
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);
printf("-*-*-*-*-*-*-*-*-*-*\n");
    switch(choice){
      case 1:
	      insert();printf("\n");break;
      case 2:
	      delete();printf("\n");break;
      case 3:
	      display();printf("\n");break;
      case 4:
	      printf("Exiting....!\n");break;
      default:
	      printf("Invalid choice\n");
    }
  }while(choice!= 4);
  return 0;
}
