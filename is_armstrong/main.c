/*
Title: Armstrong Number checker
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 09-07-2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num;
    printf("Input Number: ");
    scanf("%d", &num);
    if(isArmstrong(num)){
        printf("%d is an Armstrong Number", num);
    }
    else{
        printf("%d is not an Armstrong Number", num);
    }
}

int isArmstrong(int num){
    int sum = 0, _num = num;
    while(num > 0){
        sum += (int)round(pow(num % 10,3));
        num /= 10;
    }
    return (sum==_num) ? 1 : 0;
}
