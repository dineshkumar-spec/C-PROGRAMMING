//16.Write a function to print array elements
#include <stdio.h>
#define N 1000

void print(int arr[],int size){
  int i;
  printf("Entered array elements are:\n");
  for(i=0;i<size;i++){
   printf("%d ",arr[i]); 
  }
   printf("\n");
}
int main(){
  int arr[N];
  int size,i;
  printf("Enter size of array:\n");
  scanf("%d",&size);

  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  print(arr,size);
  return 0;
}
