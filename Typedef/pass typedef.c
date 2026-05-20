//Pass typedef structure to function and print members.
#include <stdio.h>
typedef struct{
  int cricket;
  int football;
  float shooting;
}game;

void func(game *g){
  printf("Cricket = %d\nFootball = %d\nShooting = %.2f\n",g->cricket,g->football,g->shooting);
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
