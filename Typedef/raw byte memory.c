//Display raw byte memory of union
#include <stdio.h>
union value{
  unsigned short data;
  unsigned char byte[2];
};
int main(){
  union value val;
  val.data = 0x1234;
  printf("16 bit Data = 0x%X\n",val.data);
  printf("Raw byte memory of union\n");
  for(int i=0;i<2;i++){
    printf("Byte[%d] = 0x%X\n",i,val.byte[i]);
  }
  return 0;
}
