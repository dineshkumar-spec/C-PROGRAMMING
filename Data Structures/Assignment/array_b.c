/*Use the same implementation to store temperature sensor readings and display: 
 Latest readings  
 Minimum value  
 Maximum value  
 Average value */
#include <stdio.h>
#define N 100
int main(){
  int arr[N], size, min,max;
  float avg = 0;
  printf("Enter size of temperature array:\n");
  scanf("%d",&size);
  printf("Enter elements of temperature readings:\n");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
 //latest reading
 printf("\nTemperature readings are\n");
 for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
 }

 //min max
 min = max = arr[0];
 for(int i=1;i<size;i++){
   if(arr[i]<min)
     min = arr[i];

   if(arr[i]>max)
     max = arr[i];
 }

 for(int i=0;i<size;i++){
   avg+=arr[i];
 }
 avg = avg/size;
 printf("\n");
 printf("Latest reading of temperature is:%d\n",arr[size - 1]);
 printf("Minimum value:%d\n",min);
 printf("Maximum value:%d\n",max);
 printf("Average value:%f\n",avg);
  return 0;
}
