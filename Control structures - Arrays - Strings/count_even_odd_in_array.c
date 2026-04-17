//15.Count even and odd numbers in an array
#include <stdio.h>
#define N 15
int main(){
  int i;
  int even=0;
  int odd = 0;
  int arr[N];

  printf("Enter array elements:\n");
  for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
  } 
  for(i=0;i<N;i++){
    if(arr[i]%2==0)
    {
      even++;
      //printf("Even number count %d\n",even);
    }
    else{
      odd++;
      //printf("Odd number count %d\n",odd);
    }
  }
  printf("%d  even numbers count\n",even);
  printf("%d  odd number count\n",odd);
  return 0;
}
