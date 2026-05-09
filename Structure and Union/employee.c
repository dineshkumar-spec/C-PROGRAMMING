/*Create a structure Employee with:
• id
• salary
• department
Find employee with highest salary*/
#include <stdio.h>
struct Employee {
  int id;
  float salary;
  char department[50];
};
int main(){
  struct Employee emp[10];
  for(int i=0;i<3;i++){
    printf("Enter Employee Details:%d\n",i+1);
    printf("Enter id:\n");
    scanf("%d",&emp[i].id);
    printf("Enter salary:\n");
    scanf("%f",&emp[i].salary);
    printf("Enter department:\n");
    scanf("%s",emp[i].department);
  }

  printf("\nEmployee details\n");
  for(int i=0;i<3;i++){
    printf("Employee details:%d",i+1);
    printf("Id:%d, Salary:%.2f, Department:%s\n",emp[i].id, emp[i].salary, emp[i].department);
  }

  float st = emp[0].salary;
  for(int i=0;i<3;i++){
    if(emp[i].salary>st){
      st = emp[i].salary;
    }
  }
  for(int i=0;i<3;i++){
    if(st == emp[i].salary){
      printf("Highest salary Employee Id:%d, Salary:%.2f, Department:%s\n",emp[i].id, emp[i].salary, emp[i].department);
      break;
    }
  }
  return 0;
}
