//Print array elements using pointer arithmetic only
#include <stdio.h>
#define N 100
int main(){
  int arr[N];
  int *ptr = arr;
  int size;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  
  printf("Enter elements:\n");
  for(int i=0;i<size;i++){
    scanf("%d",ptr + i);
  }
  for(int i=0;i<size;i++){
    printf("%d ",*(ptr+i));
  }
  return 0;
}
