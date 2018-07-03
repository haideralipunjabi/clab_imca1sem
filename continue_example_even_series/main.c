/*
Title: Continue Statement Example, Even Series
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 02-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    while(num <= 50){
        num += 2;
        if(num == 10 || num == 20)
            continue;
        printf("%d\n", num);
    }

    return 0;
}


