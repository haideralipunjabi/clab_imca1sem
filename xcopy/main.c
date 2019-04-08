/*
Title: xCopy (copy using Command Line)
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 29-08-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *fs, *ft;
    int ch;
    if(argc != 3){
        printf("Invalid Arguments");
        return 1;
    }
    fs = fopen(argv[1], "r");
    ft = fopen(argv[2], "w");

    if(fs==NULL || ft==NULL){
        printf("Error");
        return 1;
    }
    while(1){
        ch = fgetc(fs);
        if(feof(fs))
            break ;
        fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
