/*
Title: Factorial in Arrays
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 27-07-2018
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
    int array[SIZE], i;
    // Input
    for(i=0; i<SIZE; i++){
        printf("Insert Number: ");
        scanf("%d", &array[i]);
    }
    printf("\n");
    for(i=0; i<SIZE; i++){
        printf("Factorial of %d = %d\n",array[i], fact(array[i]));
    }

    return 0;
}


int fact(int num){
    if(num <= 1)
        return 1;
    return num * fact(num-1);
}
