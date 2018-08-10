/*
Title: Bubble Sort
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 08-08-2018
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {4,76,23,6,2};
    bubblesort_min(arr,5);
    //bubblesort_max(arr,5);
    prnarray(arr);
}

void bubblesort_min(int* arr, int size){
    int i, count = 0;
    for(i =0; i<size-1;i++){
        if(arr[i+1] < arr[i]){
            swap(&arr[i+1], &arr[i]);
            count++;
        }
    }
    if(count != 0)
        bubblesort_min(arr,size);
}
void bubblesort_max(int* arr, int size){
    int i, count = 0;
    for(i =0; i<size-1;i++){
        if(arr[i+1] > arr[i]){
            swap(&arr[i+1], &arr[i]);
            count++;
        }
    }
    if(count != 0)
        bubblesort_max(arr,size);
}
void prnarray(int* arr){
    int i;
    for(i = 0; i<5;i++){
            printf("%d\t", arr[i]);
    }
}
void swap(int* x, int* y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
