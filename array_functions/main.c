/*
Title: Array Functions
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 24-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
    int array[SIZE], i,search, result;
    for(i=0; i<SIZE; i++){
        printf("Insert Number: ");
        scanf("%d", &array[i]);
    }

    int max_pos = pMax(array);
    int min_pos = pMin(array);
    printf("Max value in array = %d, at %d\n", array[max_pos], max_pos+1);
    printf("Min value in array = %d, at %d\n\n", array[min_pos], min_pos+1);

    printf("Insert number to search: ");
    scanf("%d", &search);
    result = find(array, search);
    if(result == -1)
        printf("Number %d not found", search);
    else
        printf("Number %d found at %d", search, result+1);

}

int find(int arr[], int el){
    int i =0;
    for(i; i < SIZE; i++){
        if(arr[i] == el)
            return i;
    }
    return -1;
}

int pMax(int arr[]){
    int current = 0;
    int i =0;
    for(i;i<SIZE;i++){
        if(arr[i]>arr[current])
            current = i;
    }
    return current;
}

int pMin(int arr[]){
    int current = 0;
    int i =0;
    for(i;i<SIZE;i++){
        if(arr[i]<arr[current])
            current = i;
    }
    return current;
}


