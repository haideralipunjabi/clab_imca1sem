/*
Title: Swap with functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 03-07-2018
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1 ,num2;
    char choice;
    while(1){
        system("cls");
        // Input
        printf("Input num1: ");
        scanf("%d", &num1);
        printf("Input num2: ");
        scanf("%d", &num2);
        printf("Before Swap num1: %d\n", num1);
        printf("Before Swap num2: %d\n", num2);
        swap(&num1, &num2);
        printf("Swapped num1: %d\n", num1);
        printf("Swapped num2: %d", num2);
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



void swap(int* num1, int* num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
