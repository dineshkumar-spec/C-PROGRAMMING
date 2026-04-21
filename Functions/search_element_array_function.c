//21.Write a function to search an element in array and return index
//(Return -1 if not found)
#include <stdio.h>
#define N 1000
void search(int arr[], int size, int data){
  int i,found=0;
  for(i=0;i<size;i++){
    if(arr[i]==data){
    printf("Element is searched at index %d\n",i);
    found = 1;
    break;
    }
  }
  if(found==0){
    printf("Element is not in array!\n");
  }
}
int main(){
  int arr[N];
  int i,size,data;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("Array elemnts are:\n");
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
   printf("\n");
  printf("Enter searching element:\n");
  scanf("%d",&data);
  search(arr,size,data);
  return 0;
}
