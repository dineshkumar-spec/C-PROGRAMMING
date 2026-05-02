//Find sum of array using pointer increment
#include <stdio.h>
#define N 100
int main(){
  int arr[N];
  int *ptr = &arr[0];
  int i,size;
  printf("Enter size of array:\n");
  scanf("%d",&size);

  if(size <=0 || size>N){
    printf("invalid size!");
    return 1;
  }

  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",ptr+i);
  }
 int sum=0;
  for(i=0;i<size;i++){
    sum+=*(ptr+i);
  }
  printf("sum of array elements are %d\n",sum);
  return 0;
}
