//It keeps the updated value because it is initialized only once and shared across recursive calls.
//it retains values between calls.
#include <stdio.h>
void fun(){
  static int x = 0;
  x++;
  printf("%d\n",x);
  if(x<5)
    fun();
}
int main(){
  fun();
  return 0;
}
