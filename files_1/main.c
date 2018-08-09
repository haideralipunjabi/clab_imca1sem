/*
Title: Files with C 01
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 09-08-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[1000];
    int i;
    for(i=0;i<1000;i++){
        c[i] = getc(stdin);
        if(c[i] =='\n')
            break;
    }
    print(c);
    return 0;
}

void print(char* c){
    int i =0;
    while(c[i] != '\n'){
        putc(c[i], stdout);
        i++;
    }
}
