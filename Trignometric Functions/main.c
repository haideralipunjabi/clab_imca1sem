/*
Title: Trignometric Functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 15-08-2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
int main()
{
    float inp, factor = PI/180;

    printf("Input an Angle (degrees): ");
    scanf("%f", &inp);
    printf("Sin of %f = %f\n", inp, sin(inp*factor));
    printf("Cos of %f = %f\n", inp, cos(inp*factor));
    printf("Tan of %f = %f", inp, tan(inp*factor));
    return 0;
}
