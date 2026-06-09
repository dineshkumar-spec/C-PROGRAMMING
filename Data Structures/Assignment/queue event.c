/*5: Queue → Embedded Event Queue 
Part A: 
Implement Queue using array with: 
 Enqueue  
 Dequeue  
 Display*/
#include <stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;

void enqueue(){
  int num;
  if(rear == size-1){
   printf("queue overflow\n");
   return;
  }
 
  printf("Enter number:\n");
  scanf("%d",&num);
  
  if(front == -1)
    front = 0;
  rear++;	//rear = 0;
  queue[rear] = num;
  printf("%d inserted element to queue\n",queue[rear]);
}

void dequeue(){
  if(front == -1 || front>rear){
    printf("stack undrflow\n");
    return;
  }
  printf("%d element removed\n",queue[front]);
  front++;
  //check empty and resetting
  if(front > rear){
    front = -1;
    rear = -1;
  }
}

void display(){
  if(front == -1){
    printf("queue is empty\n");
    return;
  }
  for(int i=front;i<=rear;i++){
    printf("%d ",queue[i]);
  }
}

int main(){
int choice;
do{
  printf("1.Enqueue\n");
  printf("2.Dequeue\n");
  printf("3.Display\n");
  printf("4.Exit\n");
  printf("Enter choice:\n");
  scanf("%d",&choice);
  printf("-----------------\n");
  switch(choice)
  {
    case 1:
	    enqueue();printf("\n");break;
    case 2:
	    dequeue();printf("\n");break;
    case 3:
	    display();printf("\n");break;
    case 4:
	    printf("Exiting....!\n");break;
  }
}while(choice!=4);
  return 0;
}
