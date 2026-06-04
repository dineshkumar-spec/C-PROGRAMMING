#include <stdio.h>

int x = 10;
int main() {
int x = 20;
{
static int x = 30;
printf("%d ", x);
}
printf("%d", x);
return 0;
}
//30 20
