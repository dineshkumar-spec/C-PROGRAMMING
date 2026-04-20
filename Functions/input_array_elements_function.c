//15.Write a function to input array elements
#include <stdio.h>
#define N 1000
void myfunc(){
  int arr[N];
  int i,size;
  printf("Enter array size:\n");
  scanf("%d",&size);
  printf("Enter elements:\n");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
}
int main(){

  myfunc();
  return 0;
}
