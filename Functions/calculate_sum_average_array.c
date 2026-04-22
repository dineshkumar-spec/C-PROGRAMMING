//18.Write a function to calculate sum and average of array
#include <stdio.h>
#define N 1000
void calculate(int arr[],int size){
  int sum=0;int i;
  for(i=0;i<size;i++){
    sum+=arr[i];
  }
  printf("sum=%d\n",sum);
  int avg = sum/size;
  printf("average=%d\n",avg);
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
  calculate(arr,size);
  return 0;
}
