//8.Demonstrate NULL pointer usage safely
//ptr gives garbage random value
//& give exact address
#include <stdio.h>
int main(){
  int *ptr = NULL;
  printf("value = %p\n",ptr);
  if(ptr){
    printf("Pointer does not have null\n");}
  else
    {printf("Pointer have value null\n");}
  return 0;
}
