/*Create structure Device containing:
• device_id
• status (enum ON/OFF)*/
#include <stdio.h>
enum status{ON,OFF};

struct Device{
  int device_id;
  enum status st;
};

int main(){
  struct Device d;
  printf("Enter device id:\n");
  scanf("%d",&d.device_id);
  
  printf("Enter status on-0 or off-1\n");
  scanf("%d",(int *)&d.st);
  
  printf("Device id: %d\n",d.device_id);
  if(d.st == 0)
  printf("Device status: On \n");
  else
  printf("Device status: Off \n");
  return 0;
}
