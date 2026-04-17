//17.Finding second largest element in an array
#include <stdio.h>
#define N 1000
int main(){
  int arr[N],i,size,max,second;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  
  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  max = arr[0];
  second = arr[0];
  for(i=0;i<size;i++){
    if(arr[i]>max){
      second = max;
      max = arr[i];
    }

    else if(arr[i]!= max && arr[i] > second)
     {
       second = arr[i];
     }
  }
 printf("second largest number is %d\n",second);
  return 0;
}
