//30.Create a program that uses the sizeof operator to print the size of an array and its individual elements
#include <stdio.h>
int main(){
  int array[] = {34,5,78,9,43,89,1,2,3,4,5,6,7,8,9,};
  int i;
  int length = sizeof(array)/sizeof(array[0]);	//formula to find total element in array
  printf("Size of array is %zu\n",sizeof(array));	//size of array
  printf("Total elements of array is %d\n",length);
  for (i=0;i<length;i++){
    printf("size of individual element %zu\n",sizeof(array[i]));
    
  }
  return 0;
}
