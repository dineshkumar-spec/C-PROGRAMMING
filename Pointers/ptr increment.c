//Show difference between p++ and (*p)++
#include <stdio.h>
int main(){
  int arr[5] = {34,29,17,93,55};
  int *p = arr;
  for(i=0;i<5;i++){
    printf("%d ",);
  }
  printf("%d ",(*p)++);  //address incremented 
//  printf("%d ",p++);   //error occurs we giving ptr and try to print integer 
  return 0;
}
