/*Create a structure Student containing:
• id
• name
• marks
Input and print details of one student*/

#include <stdio.h>
#include <string.h>
struct Student{
  int id;
  char name[50];
  int marks;
};
int main(){
  struct Student s1;
  s1.id = 10;
  strcpy(s1.name,"Dinesh");
  s1.marks = 100;
  printf("Id=%d, Name=%s, Marks=%d\n",s1.id, s1.name, s1.marks);
  return 0;
}
