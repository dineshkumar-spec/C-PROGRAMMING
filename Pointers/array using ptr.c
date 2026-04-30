//Pass array to function using pointer and print elements
#include <stdio.h>
#define N 1000
void array(int *arr, int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
}
int main(){
  int arr[N];
  int i,size;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  array(arr,size);
  return 0;
}
