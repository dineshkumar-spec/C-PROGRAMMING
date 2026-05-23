//Store 16-bit data and access as two bytes using union
#include <stdio.h>
union value{
  unsigned short data;	//one 16 bit number
  unsigned char byte[2];  //divided into 2 bytes
};
int main(){
  union value val;
  val.data = 0x4567;
  printf("16 bit data = 0x%X\n",val.data);
  printf("Byte 1 = 0x%X\n",val.byte[0]);
  printf("Byte 2 = 0x%X\n",val.byte[1]);
  return 0;
}
