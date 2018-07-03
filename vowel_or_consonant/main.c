/*
Title: Vowel or Consonant
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 26-06-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Deceleration
    char c;

    //Input
    printf("Input letter: ");
    scanf("%c", &c);
    // Processing
    if(c == 'a' || c == 'A')
        printf("%c is a vowel", c);
    else if(c == 'e' || c == 'E')
        printf("%c is a vowel", c);
    else if(c == 'i' || c == 'I')
        printf("%c is a vowel", c);
    else if(c == 'o' || c == 'O')
        printf("%c is a vowel", c);
    else if(c == 'u' || c == 'U')
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);
    return 0;
}
