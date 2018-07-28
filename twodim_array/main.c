/*
Title: Matrixes (Two Dimensional Arrays)
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 28-07-2018
*/
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
int main()
{
    int arr1[ROWS][COLS] =  {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}
                            },
        arr2[ROWS][COLS] =  {
                                {9,8,7},
                                {6,5,4},
                                {3,2,1}
                            };
    int res[ROWS][COLS];
    //addArrays(arr1,arr2,res);
    //subArrays(arr1,arr2,res);
    //mulArrays(arr1,arr2,res);
    //transpose(arr1);
    //scalarMultiply(arr1,3);
    prnArray(res);
    return 0;
}

void prnArray(int arr[ROWS][COLS]){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void addArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int sum[ROWS][COLS]){

    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

}

void subArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int diff[ROWS][COLS]){
    scalarMultiply(arr2, -1);
    addArrays(arr1,arr2,diff);
}

void scalarMultiply(int arr[ROWS][COLS], int sc){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            arr[i][j] = arr[i][j] * sc;
        }
    }
}

void transpose(int arr[ROWS][COLS]){
    int _arr[ROWS][COLS];
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            _arr[j][i] = arr[i][j];
        }
    }
    copyArray(_arr,arr);
}

void mulArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int prod[ROWS][COLS]){
    zeroArray(prod);
    int i,j,k;
        for(i=0;i<ROWS;i++){
            for(j=0;j<COLS;j++){
                for(k = 0; k<ROWS;k++){
                    prod[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
}
void copyArray(int source[ROWS][COLS],int target[ROWS][COLS]){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            target[i][j] = source[i][j];
        }
    }
}


void zeroArray(int arr[ROWS][COLS]){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            arr[i][j] = 0;
        }
    }

}
