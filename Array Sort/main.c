#include <stdio.h>
#include <stdlib.h>

int main()
{
    int newarr[SIZE], i =0;
    for(i; i<SIZE; i++){
        int max_pos = pMax(arr);
        newarr[i] = arr[max_pos];
        arr[max_pos] = -1;
    }
    return newarr;

}
