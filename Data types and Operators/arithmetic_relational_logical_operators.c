//4. Write a program that uses different operators (arithmetic, relational, logical)
#include <stdio.h>
#include <math.h>
int main(){
  int n1 = 58;
  int n2 = 23;
  int add = n1 + n2;
  int sub = n1 - n2;
  int mul = n1 * n2;
  int div = n1 / n2;
  //float pow;
  
  int greater = n1 > n2;
  int less = n1 < n2;
  int gr_or_eq = n1 >= n2;
  int ls_or_eq = n2 <= n1;

  printf("add = %d\n",add);
  printf("sub = %d\n",sub);
  printf("mul = %d\n",mul);
  printf("div = %d\n",div);
  printf("pow = %f\n",pow(58,2));
  
  printf("greater = %d\n",greater);
  printf("less = %d\n",less);
  printf("gr_or_eq = %d\n",gr_or_eq);
  printf("ls_or_eq = %d\n",ls_or_eq);
  
  printf("logical and = %d\n",n1 && n2);
  printf("logical or = %d\n",n1 || n2);
  printf("logical not = %d\n", !n2);
  
  return 0;
}






