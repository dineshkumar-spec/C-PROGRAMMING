/*Use the same implementation to maintain only the latest sensor values by replacing old 
values when memory becomes full. */
#include <stdio.h>
#define size 5
int main(){
  int sensor[size];
  int index = 0;
  printf("Enter %d sensor readings:\n",size);
  for(int i=0;i<size;i++){
    scanf("%d",&sensor[i]);
  }
  while(1){
    int new_reading;
    printf("\nEnter new sensor reading(-1 to exit)\n");
    scanf("%d",&new_reading);
    if(new_reading == -1)
	    break;
    sensor[index] = new_reading;
    index++;
    if(index == size)
	    index=0;
    printf("current buffer:\n");
    for(int i=0;i<size;i++){
      printf("%d ",sensor[i]);
    }
  }
  return 0;
}
