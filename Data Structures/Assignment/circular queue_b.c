/*Part B: 
Use the same implementation with UART receiver and store incoming bytes continuously. 
Commands: 
LEDON 
STATUS 
TEMP*/
#include <stdio.h>
#include <string.h>
#define size 10
char queue[size][20];
int front = -1;
int rear = -1;
void enqueue(char cmd[]){
  if((rear+1)%size == front){
    printf("queue is full\n");return;
  }

  if(front == -1){
    front = rear = 0;
  }
  else
  {
    rear = (rear+1)%size;
  }

  strcpy(queue[rear],cmd);
}

void dequeue(){
  if(front == -1){
    printf("queue is empty\n");return;
  }
  printf("processing command: %s\n",queue[front]);
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

  i = front;
  printf("commands in queue\n");

  while(1){
    printf("%s\n",queue[i]);
    if(i == rear)
	    break;

    i = (i+1)%size;
  }
}


int main(){
  enqueue("LEDON");
  enqueue("STATUS");
  enqueue("TEMP");

  display();
  printf("\n");

  dequeue();
  dequeue();
  dequeue();
  return 0;
}
