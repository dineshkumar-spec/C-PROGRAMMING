#include <stdio.h>

static int i;
int main() {
static int j;
printf("%d %d", i, j);
return 0;
}
//0 0 - static extern default initial value is 0
