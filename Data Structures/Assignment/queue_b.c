/*5-PART B
Use the same implementation to store events: 
BUTTON_PRESS 
UART_DATA 
TEMP_ALERT 
Process events sequentially.*/
#include <stdio.h>
#include <string.h>
#define size 5
char queue[size][20];
int front = -1;
int rear = -1;

void enqueue(char event[]){
  if(rear == size-1){
    printf("Queue overflow\n");
    return;
  }
  
  if(front == -1)
    front = 0;
  rear++;
  strcpy(queue[rear],event);
}

void dequeue(){
  if(front == -1 || front > rear){
    printf("Queue underflow\n");
    return;
  }
  printf("processing event: %s\n",queue[front]);
  front++;

  if(front > rear){
    front = rear = -1;
  }
}

int main(){
  enqueue("BUTTON_PRESS");
  enqueue("UART_DATA");
  enqueue("TEMP_ALERT");
  while(front!= -1){
    dequeue();
  } 
  return 0;
}
