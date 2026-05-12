/*Create a structure for bank account and implement:
• deposit
• withdraw
• display balance*/
#include <stdio.h>
struct bank_acc{
  float deposit;
  float withdraw;
  float balance;
};
int main(){
  struct bank_acc b;
  printf("Enter deposit amount:\n");
  scanf("%f",&b.deposit);
  printf("Enter withdraw amount:\n");
  scanf("%f",&b.withdraw);
  b.balance = b.deposit - b.withdraw;
  printf("Balance amount:%2.f\n",b.balance);
  return 0;
}
