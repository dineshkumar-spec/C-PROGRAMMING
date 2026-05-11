//Write a function that accepts a structure and prints its members.
#include <stdio.h>
struct func{
    int id;
    char name[50];
    float salary;
};
void function(struct func *f){	//call by ref variable accessed using ->
    printf("Enter id:\n");
    scanf("%d",&f->id);
    printf("Enter name:\n");
    scanf("%s",f->name);
    printf("Enter salary:\n");
    scanf("%f",&f->salary);
};

int main()
{
    struct func f;
    function(&f);
    printf("Id:%d, Name:%s, Salary:%.2f\n",f.id,f.name,f.salary);
    return 0;
}
