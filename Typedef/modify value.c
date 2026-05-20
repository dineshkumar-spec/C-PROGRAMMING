//Pass structure pointer to function and modify values
#include <stdio.h>
typedef struct{
  int cricket;
  int football;
  float shooting;
}game;

void func(game *g){
 g->cricket  += 10;
 g->football -= 5;
 g->shooting +=  5.5;
 printf("Modified values:\nCricket = %d\nFootball = %d\nShooting = %.2f\n",g->cricket,g->football,g->shooting);
}
int main(){
  game g;

  printf("Enter criket points:\n");
  scanf("%d",&g.cricket);
  printf("Enter football points:\n");
  scanf("%d",&g.football);
  printf("Enter shooting points:\n");
  scanf("%f",&g.shooting);
  func(&g);
  return 0;
}
