#include <stdio.h>

int main() {
for(int i = 0; i < 3; i++) {
static int a = 5;
a++;
printf("%d ", a);
}
return 0;
}
//6 7 8
