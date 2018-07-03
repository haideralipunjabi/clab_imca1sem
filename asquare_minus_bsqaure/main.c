/*
Title: asquare_minus_bsquare
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 31-05-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Decleration
    int a, b, result;
    // Input
    printf("asquare_minus_bsquare\n");
    printf("Input 'a': ");
    scanf("%d", &a);
    printf("Input 'b': ");
    scanf("%d", &b);
    // Processing
    result = (a * a) - (b * b);
    //result = (a + b) * (a - b);

    // Output
    printf("Result: %d", result);
    return 0;
}
