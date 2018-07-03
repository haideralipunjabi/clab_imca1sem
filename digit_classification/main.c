/*
Title: Digit Classification
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 27-06-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Deceleration
    int inp = -1;
    // Input
    printf("Enter a digit (0-9): ");
    scanf("%d", &inp);

    // Processing
    if(inp>=10)
        printf("Multiple Digits entered");
    else if(inp>= 0)
        printf("Single Digit Entered");
    else
        printf("Non-Numeric Character Entered");

}
