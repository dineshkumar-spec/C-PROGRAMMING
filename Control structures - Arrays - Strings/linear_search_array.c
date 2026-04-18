//14.Search an element in array (Linear search).
//Print index if found.
#include <stdio.h>
int main(){
  int arr[10]={32,78,24,10,73,82,36,49,91,49};
  int data=49;
  int found = 0;
  for(int i=0;i<10;i++){
    printf("%d ",arr[i]);	//print array elements
  }
    printf("\n");

  for(int i=0;i<10;i++){	//check index found or not
    if(arr[i]==data){
      printf("Element is found at index %d\n",i);
    found = 1;break;}
}     

if(found==0)
  printf("Element is not found\n");
  return 0;
}
