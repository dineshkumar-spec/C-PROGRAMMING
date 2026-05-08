/*Create an integer array and use a pointer to find:
• smallest element
• largest element*/
#include <stdio.h>
int main(){
  int arr[] = {101,45,52,90,32,61,90,0,57,29};
  int *ptr = arr;
  int i;
  int largest = *ptr;
  int smallest = *ptr;
  for(i=1;i<10;i++){
    if(*(ptr+i)>largest)
      largest = *(ptr+i);

    if(*(ptr+i)<smallest)
      smallest = *(ptr+i);
    
  }
   printf("largest %d ",largest);
   printf("smallest %d ",smallest);
  
  return 0;
}
