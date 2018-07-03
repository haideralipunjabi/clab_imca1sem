/*
Title: Matrix Pattern
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 06-06-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Decleration
    int num, // number of rows (and cols) to be printed
    row_count = 0, // counter for rows
    col_count = 0; // counter for cols

    // Input
    printf("Input number (size) of pattern: ");
    scanf("%d", &num);

    // Processing
    ROW:
        if(row_count < num){ // if rows printed are less than required
            row_count++;     // new row is being printed
            COL:
                if(col_count < num){                // of cols printed are less than required
                    col_count++;                    // new col is being printed
                    printf("%d\t", col_count);
                    goto COL;                       // begin printing of next col
                }
                else{                    // required cols have been printed
                    col_count = 0;      // reset counter
                    printf("\n");
                    goto ROW;          // begin new row
                }
        }
}
