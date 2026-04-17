//11.Store 10 integers in an array and find the largest element
#include <stdio.h>
int main(){
  int i,max;
  int arr[10];
  printf("Enter number of elements in an array:\n");
  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  max = arr[0];		//assigning 0th element as largest
  for(i=1;i<10;i++){
    if(arr[i]>max)      //compare 
      max = arr[i];
  }
  printf("%d is largest element\n",max);
  return 0;
}
