//Store sensor data in union (int & float) and display raw memory.
#include <stdio.h>
union data{
  int led;
  float display;
};
int main(){
  union data d;
  unsigned char *p = (unsigned char*)&d;	// byte pointer to view raw memory
  d.led = 10;		//store 10
  d.display = 25.0;	//overwrites 10 to 25

  //p = (unsigned char*)&d;	// Take address of union and convert to byte pointer

  printf("Raw memory:\n");
   for(int i=0; i<sizeof(d); i++){
        printf("%02x ", p[i]);
    }
  return 0;
}
