//Access 2D array using pointer
#include <stdio.h>
#define R 100 
#define C 100
int main(){
  int arr[R][C];
  int (*ptr)[C] = arr;//ptr is a pointer to an array of C integers (one row of a 2D array). 
//We use C because the compiler must know the number of columns to move row by row in memory.
  int i,j,row,col;
  printf("Enter row size and column size:\n");
  scanf("%d %d",&row,&col);

  printf("Enter elements:\n");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",(*(ptr+i)+j));
    }
  }
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d ",*(*(ptr + i)+j));
    }
  }
  return 0;
}
