/*Create a character array (string).
Using only pointers:
• count words in the sentence
Example:
"Embedded C is powerful" → 4 words*/
#include <stdio.h>
#define N 100
int main(){
  char name[N];
  printf("Enter sentence:\n");
  fgets(name,N,stdin);
  char *ptr = name;
  int words = 0;
  for(int i=1;i<N;i++){
    if(*(ptr+i)==' ')
    words++;
  }
  printf("words = %d\n",words+1);
  return 0;
}
