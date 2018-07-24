/*
Title: Pointer Test
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 12-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var;
    int* ptr;
    var = 3;
    ptr = &var;

    printf("Value of var before change = %d\n", var);
    printf("Address of var before change = %u\n", ptr);
    changeVal(ptr);
    printf("Value of var after change = %d\n", var);
    printf("Address of var after change = %u\n", ptr);
}

void changeVal(int* ptr){
    (*ptr)++;
}
