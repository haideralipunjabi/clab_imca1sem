/*
Title: Matrices (Two Dimensional Arrays)
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 28-07-2018
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main()
{
    int arr1[SIZE][SIZE] =  {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}
                            },
        arr2[SIZE][SIZE] =  {
                                {9,8,7},
                                {6,5,4},
                                {3,2,1}

                            };
    int res[SIZE][SIZE];
    addArrays(arr1,arr2,res);
    //subArrays(arr1,arr2,res);
    //mulArrays(arr1,arr2,res);
    //transpose(arr1);
    //scalarMultiply(arr1,3);
    prnArray(res);
    //minor(arr1, SIZE, 0,0);
    return 0;

}

void prnArray(int arr[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void addArrays(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int sum[SIZE][SIZE]){

    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

}

void subArrays(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int diff[SIZE][SIZE]){
    scalarMultiply(arr2, -1);
    addArrays(arr1,arr2,diff);
}

void scalarMultiply(int arr[SIZE][SIZE], int sc){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            arr[i][j] = arr[i][j] * sc;
        }
    }
}

void transpose(int arr[SIZE][SIZE]){
    int _arr[SIZE][SIZE];
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            _arr[j][i] = arr[i][j];
        }
    }
    copyArray(_arr,arr);
}

void mulArrays(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int prod[SIZE][SIZE]){
    zeroArray(prod);
    int i,j,k;
        for(i=0;i<SIZE;i++){
            for(j=0;j<SIZE;j++){
                for(k = 0; k<SIZE;k++){
                    prod[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
}
void copyArray(int source[SIZE][SIZE],int target[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            target[i][j] = source[i][j];
        }
    }
}


void zeroArray(int arr[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            arr[i][j] = 0;
        }
    }

}


void minor(int arr[SIZE][SIZE], int size, int I, int J, int min[SIZE-1][SIZE-1]){
    int i,j;
    int minI=0,minJ=0;
    for(i =0; i<size; i++){
        for(j=0;j<size;j++){
            if(i==I || j==J){
                if(i == I){
                    minI = 1;
                }
                if(j == J){
                    minJ = 1;
                }
                continue;
            }

            min[minI?i-1:i][minJ?j-1:j] = arr[i][j];
            printf("%d:%d:%d\n", minI?i-1:i, minJ?j-1:j, arr[i][j]);
        }
    }
}
