/*2: Array → Sensor History Buffer 
Part A: 
Implement insertion and deletion operations in an array.*/
#include <stdio.h>
#define N 100
int main(){
  int arr[N], size, choice, pos, value, position;
  printf("Enter array size:\n");
  scanf("%d",&size);
  printf("Enter elements:\n");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  do{
    printf("1.Display\n");
    printf("2.Insert\n");
    printf("3.Delete\n");
    printf("4.Exit\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
	      for(int i=0;i<size;i++){
	        printf("%d ",arr[i]);
	      }
	      break;
	      printf("\n");
      case 2:
	    printf("Enter pos to insert:\n");
	    scanf("%d",&pos);
	    if(pos <0 || pos > size){
	      printf("Invalid position\n");
	    }
	    else
	    printf("Enter value:\n");
	    scanf("%d",&value);
	    for(int i=size;i>pos;i--){
	        arr[i] = arr[i-1];
	      }
	      arr[pos] = value;
	      size++;
	      break;
	      printf("Element inserted successfully\n");
              
              

       case 3:
	    printf("Enter pos to delete:\n");
	    scanf("%d",&position);
	    if(position >0 || position < size){
	      printf("Invalid position\n");
	    }
	    else{
	    for(int i=position;i=size-1;i++){
	      arr[i] = arr[i+1];
	    }
	    size--;
	    break;
	    printf("Element deleted successfully\n");
            
	    }
       case 4:
	    printf("Exiting....!\n");
	    break;
    }
  }while(choice!=3);
  return 0;
}
