/*
Title: Structures
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 02-08-2018
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
};
int main()
{

    struct Student student;
    printf("Enter Student Roll No: ");
    scanf("%d", &student.rollno);
    printf("Enter Student Name: ");
    scanf("%s", &student.name);
    printf("Welcome, %d - %s", student.rollno, student.name);

    return 0;
}
