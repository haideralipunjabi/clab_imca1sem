/*
Title: Digital Timer
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 26-06-2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
    int hr = 0, mn = 0, sc = 0, max_hr = 23, max_mn = 59, max_sc = 59;
    while(hr <= max_hr){
        while(mn <= max_mn){
            while(sc <= max_sc){
                Sleep(1000);
                system("cls");
                printf("%02d:%02d:%02d\n", hr,mn,sc);
                sc++;

            }
            sc = 0;
            mn++;
        }
        mn = 0;
        hr++;
    }

    return 0;
}
