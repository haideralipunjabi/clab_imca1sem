/*
Title: Recursion Functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 03-07-2018
*/

#include <stdio.h>
#include <stdlib.h>
int power(int,int);
int factorial(int);
float fPower(float,int);
int sod(int);
int bnr(int);
int main()
{
    int i =1;
    int binary, decimal;
    while(i<=100){
        binary =bnr(i);
        decimal = abnr(i,0);
        printf("%d\t%d\t%d\n",i, binary, decimal);
        i++;
    }
}

int power(int base, int p){
    if(p==0)
        return 1;
    if(p<0)
        return 0;
    return base * power(base, p-1);
}

int factorial(int n){
    if(n == 1 || n == 0)
        return 1;
    return n * factorial(n-1);
}

float fPower(float base, int p){
    if(p==0)
        return 1.0;
    if(p>0)
        return base * fPower(base,p-1);
    return 1.0 / fPower(base,-1*p);
}

int sod(n){
    if(n == 0)
        return 0;
    return n % 10 + sod(n/10);
}

int bnr(int n){
    if(n==1)
        return 1;
    if(n==0)
        return ;
    return (n%2) + bnr(n/2)*10;
}

int abnr(int n, int p){
    if(n==0)
        return 0;
    return power(2,p)*(n%10) + abnr(n/10, p+1);
}
