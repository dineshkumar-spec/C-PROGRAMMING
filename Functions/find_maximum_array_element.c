//17.Write a function to find maximum element in array
#include <stdio.h>
#define N 1000
int max(int arr[],int size,int maxi){
  int i; maxi=arr[0];
  for(i=0;i<size;i++){
  if(arr[i]>maxi)
    maxi=arr[i];
  }
  return maxi;
}
int main(){
  int arr[N];
  int i,size,maxi;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  int result = max(arr,size,maxi);
  printf("Maximum element is %d\n",result);
  return 0;
}
