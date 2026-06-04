#include <stdio.h>

void func() {
static int x = 1;
x++;
printf("%d ", x);
}
int main() {
func();
func();
func();
return 0;
}

//2 3 4
