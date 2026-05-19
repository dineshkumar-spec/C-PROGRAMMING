//Create enum for error codes and print error message
#include <stdio.h>
enum error{SUCCESS,INVALID,TIMEOUT,ERROR};
int main(){
  int err;
  printf("Enter code 0-success,1-invalid,2-timeout,3-error:\n");
  scanf("%d",&err);
  switch(err){
    case 0:
	printf("Success code\n");break;
    case 1:
        printf("Invalid code \n");break;
    case 2:
        printf("Timeout code\n");break;
    case 3:
        printf("Error code\n");break;
    default:
	printf("invalid code!\n");
  }
  return 0;
}
