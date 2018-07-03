/*
Title: Student Grading
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 09-06-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Deceleration
    int marks_eng, marks_maths, marks_sc, marks_sst, marks_urdu, marks_total;
    float percent;

    // Input
    printf("Input marks of English: ");
    scanf("%d", &marks_eng);
    printf("Input marks of Maths: ");
    scanf("%d", &marks_maths);
    printf("Input marks of Science: ");
    scanf("%d", &marks_sc);
    printf("Input marks of Social Science: ");
    scanf("%d", &marks_sst);
    printf("Input marks of Urdu: ");
    scanf("%d", &marks_urdu);

    // Processing
    marks_total = marks_eng + marks_maths + marks_sc + marks_sst + marks_urdu;
    percent = ((float)marks_total/500)*100;

    // Output
    printf("Marks: %d/500\n", marks_total);
    printf("Percentage: %f\n", percent);
    if(percent < 100 && percent >= 75)
        printf("Result: Distinction");
    else if(percent < 75 && percent >= 60)
        printf("Result: 1st Division");
    else if(percent < 60 && percent >= 50)
        printf("Result: 2nd Division");
    else if(percent < 50 && percent >= 40)
        printf("Result: 3rd Division");
    else
        printf("Result Failed");

}
