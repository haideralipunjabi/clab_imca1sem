#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define INT_MAX 2147483647
int main()
{
    sortAsc();

}

void sortAsc(){
int array[SIZE],sArray[SIZE], i;
    for(i=0; i<SIZE; i++){
        printf("Insert Number: ");
        scanf("%d", &array[i]);
    }
    for(i=0; i<SIZE; i++){
        int min_pos = pMin(array);
        sArray[i] = array[min_pos];
        array[min_pos] = INT_MAX;
    }
    printf("Sorted Array: \n");
    for(i=0; i<SIZE; i++){
        printf("%d\t", sArray[i]);
    }
}
void sortDesc(){
    int array[SIZE],sArray[SIZE], i;
    for(i=0; i<SIZE; i++){
        printf("Insert Number: ");
        scanf("%d", &array[i]);
    }
    for(i=0; i<SIZE; i++){
        int max_pos = pMax(array);
        sArray[i] = array[max_pos];
        array[max_pos] = -1;
    }
    printf("Sorted Array: \n");
    for(i=0; i<SIZE; i++){
        printf("%d\t", sArray[i]);
    }
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


