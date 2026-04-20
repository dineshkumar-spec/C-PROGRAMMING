//19.Write a function to reverse an array.
#include <stdio.h>
#define N 1000
void reverse(int arr[],int size){
  int i;
  for(i=size-1;i>=0;i--){
    printf("%d ",arr[i]);
  }
    printf("\n");
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
  reverse(arr,size);
  return 0;
}
