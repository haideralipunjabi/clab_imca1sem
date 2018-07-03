/*
Title: Print name 5 times
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 09-06-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Decleration
    int num, counter;
    char name[7];

    // Initializaiton
    num = 5;
    counter = 1;

    // Input
    printf("Input name:  ");
    scanf("%s", &name);

    LOOP:
        printf("%s\n", name);
        if(counter >= num)
             goto STOP;
        counter += 1;
        goto LOOP;
    STOP:
        return 0;
}
