/*
Title: swap_with_variable
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 31-05-2018
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Declearation
    int a, b, swap;
    // Input
    printf("Input 'a': ");
    scanf("%d", &a);
    printf("Input 'b': ");
    scanf("%d", &b);
    // Processing
    swap = a;
    a = b;
    b = swap;
    // Output
    printf("Swapped a: %d\n", a);
    printf("Swapped b: %d\n", b);
    return 0;
}
