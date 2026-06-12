/*3.Stack → Menu Navigation 
Part A: 
Implement Stack using array with: 
 Push  
 Pop  
 Peek  
 Display */
#include <stdio.h>
#define size 5
  int stack[size];
  int top = -1;

  void push(){
    int value;
    if(top == size-1){
      printf("Stack overflow\n");
      return;
    }
    printf("Enter value to push:\n");
    scanf("%d",&value);
    top++;
    stack[top] = value;
    printf("%d value pushed into stack\n",value);
  }

   void pop(){
     if(top == -1){
       printf("stack underflow\n");
       return;
     } 
     printf("poped element:%d\n",stack[top]);
     top--;
   }

   void peek(){
     if(top == -1){
       printf("stack empty\n");
       return;
     }
     printf("peeked element is %d\n",stack[top]);
   }

   void display(){
     if(top == -1){
       printf("stack empty\n");
       return;
     }
     printf("stack elements\n");
     for(int i = top;i>=0;i--){
       printf("%d\n",stack[i]);
     }   
   }

  int main(){
    int choice;
    do{
      printf("---stack Menu---\n");
      printf("1.Push\n");
      printf("2.Pop\n");
      printf("3.Peek\n");
      printf("4.Display\n");
      printf("5.Exit!\n");
      printf("Enter choice:\n");
      scanf("%d",&choice);
      switch(choice){
        case 1:push();
	       break;
        case 2:
	       pop();
	       break;
	case 3:
	       peek();
	       break;
	case 4:
	       display();
	       break;
	case 5:
	       printf("Exiting...\n");
	       break;
	default:
	       printf("Invalid choice\n");
	       break;
      }

    }while(choice!=5);

  return 0;
}
