/*1: Array → Sensor Data Storage 
Part A: 
Implement an array with operations: 
 Insert  
 Display  
 Search  
 Delete  
using sample integer values. */
#include <stdio.h>
#define N 100
int main(){
  int arr[N],size,choice,pos,value,found,key,position;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  printf("Enter elements:\n");
  for(int i=0;i<size;i++){
  scanf("%d",&arr[i]);
  }
  do{
    printf("1.Display\n");
    printf("2.Insert\n");
    printf("3.Search\n");
    printf("4.Delete\n");
    printf("5.Not Existing\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
	case 1:
		printf("\nDisplay Elements\n");
		for(int i=0;i<size;i++){
		  printf("%d ",arr[i]);
		}
		break;
		printf("\n");
	case 2:printf("Insert at position\n");
	       printf("Enter position to insert:\n");
	       scanf("%d",&pos);

	       if(pos < 0 || pos > size){
	         printf("Invalid position\n");
	       }
	       else
		 {
	           printf("Enter value:\n");
		   scanf("%d",&value);
		   for(int i=size;i<size;i--){
		     arr[i] == arr[i-1];
		   }
		   arr[pos] = value;
		   size++;
		   printf("Element inserted successfully\n");
		 }
	         break;
		printf("\n");
	case 3: printf("Enter element to Search\n");
		scanf("%d",&key);

		found = 0;

		for(int i=0;i<size;i++){
		  if(arr[i]==key)
		  {
		  printf("Element found at index %d:\n",i);
		  found = 1;
		  break;
		  }
		}

		if(found ==0){
		  printf("Element not found\n");
		
		}
		break;
		printf("\n");
	case 4:
		printf("Enter position to delete from (0 to %d\n):\n",size-1);
		scanf("%d",&position);
		if(position < 0 || position >= size)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(int i = position; i < size - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    size--;
                    printf("Element deleted successfully.\n");
                }
                break;
		printf("\n");

	case 5:
		printf("Exiting...!\n");
		break;

	default:
		printf("Invalid choice\n");
    }
  }while(choice!=5);
  return 0;
}
