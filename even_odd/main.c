/*
Title: Even Odd
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 31-05-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Deceleration
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    // Processing & Output
    if(num%2 == 0)
        printf("Number %d is even", num);
    else
        printf("Number %d is odd", num);
    return 0;
}
