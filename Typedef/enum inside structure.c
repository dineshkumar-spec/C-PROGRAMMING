//Use enum inside structure and print readable text instead of numbers.
#include <stdio.h>
enum text{EMBEDDED,SYSTEM,JOB};
struct printer{
  enum text t;
};
int main(){
  struct printer p;
  printf("Enter Embedded-0, System-0, Job-2\n");
  scanf("%d",(int *)&p.t);
  if(p.t == EMBEDDED)
	printf("Embedded\n");
  else if(p.t == SYSTEM)
	printf("System\n");
  else if(p.t == JOB)
	printf("Job\n");
  else
	printf("Invalid choice\n");
  return 0;
}
