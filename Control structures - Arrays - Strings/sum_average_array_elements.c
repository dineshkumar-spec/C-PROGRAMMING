//12.Calculate sum and average of elements in an array
#include <stdio.h>
#define N 10
int main(){
  int arr[N],i;
  printf("Enter number of elements:\n");
  //scanf("%d",&num);

  for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }

  int sum=0;
  for(i=0;i<N;i++){
    sum+=arr[i];
  }
  printf("Sum is %d\n",sum);
  int avg = sum/N;
  printf("Average is %d\n",avg);
  return 0;
}
