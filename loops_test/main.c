/*
Title: Recursion Functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 03-07-2018
*/

#include <stdio.h>
#include <stdlib.h>
int power(int,int);
int main()
{
    printf("%d", power(3,3));
}

int power(int base, int p){
    if(p==1)
        return base;
    if(p==0)
        return 1;
    return base * power(base, p-1);
}
