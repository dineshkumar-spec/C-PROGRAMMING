//Write function to find max element using pointer traversal
#include <stdio.h>
#define N 1000
void findmax(int *arr, int size){
  int max = *arr;
  int *ptr;
  for(ptr = arr;ptr< arr+size;ptr++){
    if(*ptr > max)
    {
      max = *ptr;
    }
  }
  printf("Maximum element in array is %d\n",max);
}
int main(){
  int arr[N];
  int i,size;
  printf("Enter size of array:\n");
  scanf("%d",&size);

  // Validate input
  if(size <= 0 || size > N){
    printf("Invalid size!\n");
    return 1;
  }

  printf("Enter array elements:\n");
  for(i =0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  findmax(arr,size);
 // printf("maximum element is %d\n",max);
  return 0;
}
