/*Traverse array using:
*(p+i)
p[i]
*(i+p)*/
#include <stdio.h>
#define N 100
int main(){
  int arr[N];
  int *p = arr;
  int i,size;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  
  if(size <=0 || size >N){
    printf("invalid size!");
    return 1;
  }

  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",p + i);
  }
  printf("\n");
  
  for(i=0;i<size;i++){
    printf("%d ",*(p + i));
  }
  
  printf("\n");
  for(i=0;i<size;i++){
    printf("%d ",p[i]);
  }

  printf("\n");
  for(i=0;i<size;i++){
    printf("%d ",*(i + p));
  }
  return 0;
}
