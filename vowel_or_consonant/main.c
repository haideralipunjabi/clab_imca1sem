/*
Title: Vowel or Consonant
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 26-06-2018
*/
#include <stdio.h>
#include <stdlib.h>

int isVowel(char);
int main()
{
    // Variable Deceleration
    char c;
    //Input
    printf("Input letter: ");
    scanf(" %c", &c);
    // Processing
    if(isVowel(c)){
      printf("%c is a vowel\n", c);
    }
    else{
      printf("%c is a consonant\n", c);
    }
    return 0;
}
/*
 * function isVowel - checks whether a character is a vowel or not; args: char c - character to check; returns 1 or 0
 */
int isVowel(char c){
  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    return 1;
  return 0;
}
