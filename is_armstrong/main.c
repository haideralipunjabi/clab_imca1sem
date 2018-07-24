/*
Title: Armstrong Number Checker
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 09-07-2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <math.h>
int isArmstrong(int);
int main()
{
    // Variable Deceleration
    int num;
    // Input
    printf("Input Number: ");
    scanf("%d", &num);
    // Output
    if(isArmstrong(num)){
        printf("%d is an Armstrong Number", num);
    }
    else{
        printf("%d is not an Armstrong Number", num);
    }
}

int isArmstrong(int num){
    // Variable Deceleration
    int sum = 0, _num = num;
    // Processing
    while(num > 0){
        sum += (num%10)*(num%10)*(num%10);
        num /= 10;
    }
    return (sum==_num) ? 1 : 0;
}
