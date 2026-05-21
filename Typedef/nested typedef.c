/*Create nested typedef structures:
Address inside Student*/ 
#include <stdio.h>
typedef struct{
  int doorno;
  char flatname[30];
}address;

typedef struct{
  float location;
  address ad;
}Student;
int main(){
  Student s;
  printf("Enter door no:\n");
  scanf("%d",&s.ad.doorno);
  printf("Enter flat name:\n");
  scanf("%s",s.ad.flatname);
  printf("Enter location:\n");
  scanf("%f",&s.location);
  printf("Student details:\n");
  printf("Doorno = %d\n",s.ad.doorno);
  printf("Flatname = %s\n",s.ad.flatname);
  printf("Location = %.2f\n",s.location);
  return 0;
}
