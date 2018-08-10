/*
Title: Array Functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 24-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define INT_MAX 2147483647
#define INT_MIN -2147483648
/* Function Decelerations */
void showsearch(int*);
void showsort(int*);
void showminmax(int*);
void showrev(int*);
void showmenu();
int find(int*,int);
int pMax(int*);
int pMin(int*);
void sortAsc(int*);
void sortDesc(int*);
void arrrev(int*);
void copyArray(int*,int*);

int main()
{
    int array[SIZE], i,op;
    // Input
    for(i=0; i<SIZE; i++){
        printf("Insert Number: ");
        scanf("%d", &array[i]);
    }
    system("cls");\
    showmenu();
    scanf("%d", &op);
    system("cls");
    switch(op){
        case 1:
            showminmax(array);
            break;
        case 2:
            showsort(array);
            break;
        case 3:
            showsearch(array);
            break;
        case 4:
            showrev(array);
            break;
        case 5:
            showsum(array);
            break;
        case 6:
            showavg(array);
            break;
    }
}
void showavg(int* array){
    printf("Average: %d", average(array));
}
void showsum(int* array){
    printf("Sum: %d", sum(array));
}
void showsearch(int* array){
    int search, result;
    // Show Search Prompt
    printf("Insert number to search: ");
    scanf("%d", &search);
    result = find(array, search);
    if(result == -1)
        printf("Number %d not found", search);
    else
        printf("Number %d found at %d", search, result+1);
}
void showsort(int* array){
    int i;
    // Show array sort
    sortAsc(array);
    printf("Sorted Ascending Array: \n");
    for(i=0; i<SIZE; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
    sortDesc(array);
    printf("Sorted Descending Array: \n");
    for(i=0; i<SIZE; i++){
        printf("%d\t", array[i]);
    }
}
void showminmax(int* array){
    // Show Minimum and Maximum
    int max_pos = pMax(array);
    int min_pos = pMin(array);
    printf("Max value in array = %d, at %d\n", array[max_pos], max_pos+1);
    printf("Min value in array = %d, at %d\n", array[min_pos], min_pos+1);
}
void showrev(int* array){
    int i;
    arrrev(array);
    printf("Reversed Array: \n");
    for(i=0; i<SIZE; i++){
        printf("%d\t", array[i]);
    }
}
void showmenu(){
    printf("--- CHOOSE AN OPTION---\n");
    printf("1. For Maximum and Minimum\n");
    printf("2. For Array Sort\n");
    printf("3. For Array Search\n");
    printf("4. For Array Reverse\n");
    printf("5. For Array Sum\n");
    printf("6. For Array Average\n");
}

int find(int* arr, int el){
    int i;
    for(i =0; i < SIZE; i++){
        if(arr[i] == el)
            return i;
    }
    return -1;
}

int pMax(int* arr){
    int current = 0;
    int i;
    for(i = 0;i<SIZE;i++){
        if(arr[i]>arr[current])
            current = i;
    }
    return current;
}

int pMin(int* arr){
    int current = 0;
    int i =0;
    for(i;i<SIZE;i++){
        if(arr[i]<arr[current])
            current = i;
    }
    return current;
}

void sortAsc(int* arr){
    int sArray[SIZE], i;
    for(i=0; i<SIZE; i++){
        int min_pos = pMin(arr);
        sArray[i] = arr[min_pos];
        arr[min_pos] = INT_MAX;
    }
    copyArray(sArray, arr);
}
void sortDesc(int* arr){
    int sArray[SIZE], i;
    for(i=0; i<SIZE; i++){
        int max_pos = pMax(arr);
        sArray[i] = arr[max_pos];
        arr[max_pos] = INT_MIN;
    }
    copyArray(sArray, arr);
}
void arrrev(int* arr){
    int i;
    int nArr[SIZE];
    for(i=0; i < SIZE; i++){
        nArr[i] = arr[SIZE -1 - i];
    }
    copyArray(nArr, arr);
}
int average(int* arr){
    return sum(arr)/SIZE;
}
int sum(int* arr){
    int i, s = 0;
    for(i=0; i < SIZE; i++){
            s += arr[i];
    }
    return s;
}
void copyArray(int* source, int* target){
    int i;
    for(i = 0; i<SIZE; i++)
        target[i] = source[i];
}
