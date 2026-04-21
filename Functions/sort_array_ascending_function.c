//20.Write a function to sort an array in ascending order.
#include <stdio.h>
#define N 1000
void ascending(int arr[],int size){
  int i,j,temp=0;
    for(i=0;i<size;i++){
     for(j=i+1;j<size;j++){
       if(arr[i]>arr[j]){
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;}
     }
}
    printf("sorted array is:\n");
    for(i=0;i<size;i++){
    printf("%d ",arr[i]);}
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
  ascending(arr,size);
  return 0;
}
