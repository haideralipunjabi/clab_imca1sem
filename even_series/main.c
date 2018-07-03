/*
Title: Even Series
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 06-06-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Decleration
    int num =2;

    // Processing
    LOOP:
        if(num <= 20){
            printf("%d\t", num);
            num += 2;
            goto LOOP;
        }
}
