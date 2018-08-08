/*
Title: Bank Accounts
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 08-08-2018
*/
#include <stdio.h>
#include <stdlib.h>

struct Account {
    int account_no;
    float balance;
};

int main()
{
    struct Account a;
    a.account_no = 1;
    a.balance = 10000;
    deposit(&a, 1000);
    return 0;
}

void withdraw(struct Account* acc, int amount){
    acc->balance -= amount;
    printf("Withdrawal of %d successful\nUpdated Balance: %.2f", amount, acc->balance);
}

void deposit(struct Account* acc, int amount){
    acc->balance += amount;
    printf("Deposit of %d successful\nUpdated Balance: %.2f", amount, acc->balance);
}
