/*
Title: Reverse Number
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 30-06-2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    printf("Input Number: ");
    scanf("%d", &a);
    printf("%d", reverse(a));
}

int reverse(num){
    int length = lenint(num);
    int newnum = 0;
    while(length > 0){
        newnum += (num % 10) * floor(pow(10, length-1));
        num = num /10;
        length--;
    }
    return newnum;
}
int lenint(num){
    int length = 1;
    while(1){
        if(num % (int)pow(10, length) == num){
            return length;
        }
        length++;
    }
}
