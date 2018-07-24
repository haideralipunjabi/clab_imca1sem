/*
Title: Ascending Order
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 12-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Input x: ");
    scanf("%d", &x);
    printf("Input y: ");
    scanf("%d", &y);
    printf("Input z: ");
    scanf("%d", &z);

    while(x+y+z != 3*2147483647){
        int sml = smallest(x,y,z);
        printf("%d\t", sml);
        if(sml == x) x = 2147483647;
        if(sml == y) y = 2147483647;
        if(sml == z) z = 2147483647;
    }
}



int smallest(int a, int b, int c){
    if(a < b && a < c) return a;
    if(b < a && b < c) return b;
    if(c < a && c < b) return c;
}
