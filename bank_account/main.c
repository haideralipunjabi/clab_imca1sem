/*
Title: Bank Account Manager
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 11-08-2018
*/
#include <stdio.h>
#include <stdlib.h>

struct Account {
  int no;
  int balance;
};

void main(){

  struct Account a;
  a.no = 1;
  a.balance = 10000;
  withdraw(&a,1000);
  deposit(&a,5000);
}

void withdraw(struct Account* acc, int amount){
  acc->balance = acc->balance - amount;
  printf("Withdrawal successful from Account: %d. New balance = %d\n",acc->no, acc->balance);
}
void deposit(struct Account* acc, int amount){
  acc->balance = acc->balance + amount;
  printf("Deposit successful in Account: %d. New balance = %d\n",acc->no, acc->balance);
}
