//Pass structure to a function and modify its values.
//(Show difference between pass by value and pointer)
#include <stdio.h>
struct calculator{
  int num1,num2,add,sub,mul,div;
};

void calculatebyvalue(struct calculator c){
  printf("Output by value\n");
  c.add = c.num1 + c.num2;
  printf("addition:%d\n",c.add);
  c.sub = c.num1 - c.num2;
  printf("subtraction:%d\n",c.sub);
  c.mul = c.num1 * c.num2;
  printf("multiplication:%d\n",c.mul);
  c.div = c.num1 / c.num2;
  printf("division:%d\n",c.div);
  printf("___________________________\n");
}


void calculatebyref(struct calculator *c){
 printf("Output by ref\n");
 c->add = c->num1 + c->num2;
 printf("addition:%d\n",c->add);
 c->sub = c->num1 - c->num2;
 printf("subtraction:%d\n",c->sub);
 c->mul = c->num1 * c->num2;
 printf("multiplication:%d\n",c->mul);
 c->div = c->num1 / c->num2;
 printf("division:%d\n",c->div);
 //after changing
 c->add++;
 c->sub--;
 c->mul++;
 c->div--;
 printf("add=%d, sub=%d, mul=%d, div=%d\n",c->add, c->sub, c->mul, c->div);
}
int main(){
  struct calculator c = {100,50};
  calculatebyvalue(c);
  calculatebyref(&c);
  return 0;
}
