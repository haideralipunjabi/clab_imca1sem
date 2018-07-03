/*
Title: Sum of Digits (recursive)
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 29-06-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    printf("Sum: %d", sum(num));



}

int sum(num){
    int result;
    if(num !=0){
        result = (num %10) + sum(num/10);
        // Used to reduce the sum to single digit
        if (result > 10)
            return sum(result);
        return result;
    }
}
