/*Create union containing int, float and char and observe memory behavior.*/
#include <stdio.h>
union eg{
  int num1;
  float num2;
  char name[30];
};
int main(){
  union eg e;
  printf("value for num1\n");
  printf("Enter num1:\n");
  scanf("%d",&e.num1);
  printf("Enter num2:\n");
  scanf("%f",&e.num2);
  printf("Enter name:%s\n",e.name);
  scanf("%s",e.name);
  printf("value for num 1:\nnum1 = %d\nnum2 = %.2f\nname = %s\n",e.num1,e.num2,e.name);

  printf("value for num2\n");
  printf("Enter num1:\n");
  scanf("%d",&e.num1);
  printf("Enter num2:\n");
  scanf("%f",&e.num2);
  printf("Enter name:%s\n",e.name);
  scanf("%s",e.name);
  printf("value for num2:\nnum1 = %d\nnum2 = %.2f\nname = %s\n",e.num1,e.num2,e.name);
  
  printf("value for name\n");
  printf("Enter num1:\n");
  scanf("%d",&e.num1);
  printf("Enter num2:\n");
  scanf("%f",&e.num2);
  printf("Enter name: %s\n",e.name);
  scanf("%s",e.name);
  printf("value for name:\nnum1 = %d\nnum2 = %.2f\nname = %s\n",e.num1,e.num2,e.name);
  return 0;
}
