//16.Sort array in ascending order (simple bubble sort or nested loops).
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
  int arr[MAX_SIZE];
  int i,j,size,temp;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
        {
          temp = arr[i];
   	  arr[i] = arr[j];
	  arr[j] = temp;
        }
    }
  }
  printf("Sorted array in ascending order:\n");
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
