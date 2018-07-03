/*
Title: Student Result
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 04-06-2018
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable Deceleration
    int marks_english, marks_cprog, marks_found, marks_maths, marks_evs;
    int total_marks;
    float percentage;
    printf("Student Result Calculator\n");
    // Input
    printf("Enter C Programming Marks: ");
    scanf("%d", &marks_cprog);
    printf("Enter Computer Foundation Marks: ");
    scanf("%d", &marks_found);
    printf("Enter Mathematics Marks: ");
    scanf("%d", &marks_maths);
    printf("Enter English Marks: ");
    scanf("%d", &marks_english);
    printf("Enter EVS Marks: ");
    scanf("%d", &marks_evs);

    // Processing
    total_marks = marks_cprog + marks_found + marks_maths + marks_english + marks_evs;
    if(total_marks > 500)
    {
        printf("Marks exceed valid input");
        return 0;
    }
    percentage = (((float)total_marks) / 500) * 100;


    // Output
    printf("Total Marks: %d/500\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    if(percentage >= 50)
        printf("Result: Passed");
    else
        printf("Result: Failed");
    return 0;
}
