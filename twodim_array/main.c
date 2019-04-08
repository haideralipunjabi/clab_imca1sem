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
                            };
    int arr2[SIZE][SIZE];
    int res[SIZE][SIZE];
    inpArray(arr2);
    addArrays(arr1,arr2,res);
    //subArrays(arr1,arr2,res);
    //mulArrays(arr1,arr2,res);
    //transpose(arr1);
    //scalarMultiply(arr1,3);
    prnArray(res);
    //minor(arr1, SIZE, 0,0);
    return 0;

}

void inpArray(int arr[SIZE][SIZE]){
  int i,j;
  for(i=0;i<SIZE;i++){
      for(j=0;j<SIZE;j++){
          printf("Input %d %d element\n",i,j);
          scanf("%d",&arr[i][j]);
      }
  }
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
