/*
Title: Multiplication Table
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 02-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Deceleration
    int num;
    char choice;
    // Processing
    while(1){
            system("cls");
            num = takeinput();
            printtable(num);
        REDO:
            printf("Do again? (Y/N): ");
            scanf(" %c", &choice);
            if(choice == 'N' || choice == 'n')
                break;
            else if(choice != 'Y' && choice != 'y')
                goto REDO;
    }

    return 0;
}

int takeinput(){
    int num;
    printf("Input Number: ");
    scanf("%d",&num);
    return num;
}

void printtable(num){
    int counter = 1;
    while(counter <= 100){
        printf("%d x %d = %d\n", num, counter, num*counter);
        counter++;
    }
}
