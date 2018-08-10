/*
Title: Structures
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 02-08-2018
*/
#include <stdio.h>
#include <stdlib.h>
#define TOTAL_MARKS 500
struct Student {
    char name[20];
    int rollno;
    int marks_c;
    int marks_fcc;
    int marks_maths;
    int marks_evs;
    int marks_eng;
    int marks_total;
    float percentage;
};
int main()
{
    struct Student student;
    printf("Enter Student Roll No: ");
    scanf("%d", &student.rollno);
    printf("Enter Student Name: ");
    scanf(" %[^\t\n]s", &student.name);
    printf("Enter Marks in C: ");
    scanf("%d", &student.marks_c);
    printf("Enter Marks in Computer Fundamentals: ");
    scanf("%d", &student.marks_fcc);
    printf("Enter Marks in Maths: ");
    scanf("%d", &student.marks_maths);
    printf("Enter Marks in EVS: ");
    scanf("%d", &student.marks_evs);
    printf("Enter Marks in English: ");
    scanf("%d", &student.marks_eng);
    processresult(&student);
    printresult(student);
    return 0;
}

void processresult(struct Student* student){
    student[0].marks_total = student[0].marks_c + student[0].marks_fcc + student[0].marks_maths + student[0].marks_evs + student[0].marks_eng;
    student[0].percentage = ((float)student[0].marks_total / TOTAL_MARKS) * 100.0;
}

void printresult(struct Student student){
    system("cls");
    printf("\n-----RESULT-----\n");
    printf("Name: %s, Roll No: %d\n", student.name, student.rollno);
    printf("Marks obtained: %d / %d\n", student.marks_total, TOTAL_MARKS);
    printf("Percentage: %f\n", student.percentage);
}
