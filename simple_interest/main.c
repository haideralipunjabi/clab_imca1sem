/*
Title: Simple Interest
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 31-05-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Decleration
    int principle, rate, time;
    float interest, amount;
    // Input
    printf("Simple Interest Calculator\n");
    printf("Input Principle Value: ");
    scanf("%d", &principle);
    printf("Input Rate of Interest (in percent): ");
    scanf("%d", &rate);
    printf("Input Time (years): ");
    scanf("%d", &time);
    // Processing
    interest = (principle * rate * time) / 100;
    amount = principle + interest;
    // Output
    printf("Interest: %f\n", interest);
    printf("Amount: %f\n", amount);
    return 0;
}
