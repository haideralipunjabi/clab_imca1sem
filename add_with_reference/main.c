/*
Title: Add with reference

Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 03-07-2018
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1 ,num2, sum;
    char choice;
    while(1){
        system("cls");
        // Input
        printf("Input num1: ");
        scanf("%d", &num1);
        printf("Input num2: ");
        scanf("%d", &num2);
        add(&num1, &num2, &sum);
        printf("Sum = %d", sum);
    redo:
        puts("\nDo again? (Y/N)");
        scanf(" %c", &choice);
        if(choice == 'y' || choice == 'Y')
            continue;
        else if(choice == 'n' || choice == 'N')
            break;
        else
            goto redo;
    }
}

add(int* x, int* y, int* z){
    *z = *x + *y;
}
