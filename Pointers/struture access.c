//Create structure and access members using structure pointer.
#include <stdio.h>
struct photoshop{
  int passport;
  float printout;
};

void func(struct photoshop *s){
  s->passport++;
  s->printout++;
}
int main(){
  struct photoshop p;  //structure created
  struct photoshop *s = &p;  //pointer stores address of structure
  printf("Enter passport count:\n");
  scanf("%d",&s->passport);
  printf("Enter printout count:\n");
  scanf("%f",&s->printout);
  func(s);
  printf("After count increment of work:\npassport: %d\nprintout:%.2f\n",s->passport,s->printout);
  return 0;
}
