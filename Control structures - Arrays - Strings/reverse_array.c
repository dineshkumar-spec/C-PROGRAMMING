//13.Reverse an array
#include <stdio.h>
#define N 100
int main(){
  int arr[N],i,num;
  printf("Enter number of elements in an array:\n");
  scanf("%d ",&num);
  //printf("Give Input to array:\n");
  for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
  }
  printf("Reverse of Array elements are:\n");
  for(i=num-1;i>=0;i--){
    printf("%d ",arr[i]);
  }
  return 0;
}
