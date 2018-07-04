/*
Title: Call By Reference
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 04-07-2018
*/

#include <stdio.h>
#include <stdlib.h>


int isUppercase(char c);
int isLowercase(char c);

int main()
{
    char ch;
    int choice;
    printf("%d", isUpper('C'));
    printf("Input Character: ");
    scanf(" %c", &ch);
    CHOICE:
    system("cls");
    puts("1 for lowercase");
    puts("2 for uppercase");
    printf("Input Choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            lowercase(&ch);
            break;
        case 2:
            uppercase(&ch);
            break;
        default:
            goto CHOICE;
    }
    system("cls");
    printf("Character: %c", ch);
}


int isUppercase(char c){
    return (c >= 65 && c <= 90) ? 1:0;
}
int isLowercase(char c){
    return (c >= 97 && c <= 122) ? 1:0;
}


void lowercase(char *c){
    if(isUppercase(*c)){
       *c += 32;
    }
}
void uppercase(char *c){
    if(isLowercase(*c)){
       *c -= 32;
    }
}




