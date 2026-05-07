//Create array of structure pointers and print details
#include <stdio.h>
#define N 3
struct work {
  int profit;
  float loss;
};
int main(){
  struct work w[N];
  struct work *ptr[N];
  int i;
//assign each pointer to each structure array
  for(i=0;i<N;i++){
    ptr[i] = &w[i];
  }
//input
  for(i=0;i<N;i++){
    printf("work no:%d\n",i+1);
    printf("Enter profit:\n");
    scanf("%d",&ptr[i]->profit);
    printf("Enter loss:\n");
    scanf("%f",&ptr[i]->loss);
  }
//print
  printf("Work details\n");
  for(i=0;i<N;i++){
    printf("work no:%d\n",i+1);
    printf("Profit = %d\nLoss = %.2f\n",ptr[i]->profit,ptr[i]->loss);
  }
  return 0;
}
