/*
Title: String Functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 26-07-2018
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 12
int main()
{
    char str[SIZE] = "Hello World";
    printf("Length: %d\n", xstrlen(str));
    printf("Before Reverse: %s\n", str);
    strrev(str);
    printf("After Reverse: %s\n", str);
}

int xstrlen(char* str){
    int i = 0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}
void strrev(char* str){
    int len = strlen(str);
    int i;
    char nArr[SIZE];
    for(i=0; i < len; i++){
        nArr[i] = str[len - 1 - i];
    }
    nArr[len] = '\0';
    copyArray(nArr, str);
}
void copyArray(char* source, char* target){
    int i;
    for(i = 0; i<SIZE; i++)
        target[i] = source[i];
}
