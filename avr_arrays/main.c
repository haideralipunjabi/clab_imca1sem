/*program to calculate average using arrays*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,sum=0,avg;
    printf("enter 5 numbers :");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    sum=sum+a[i];
    avg=sum/5;
    printf("\n\naverage =%d ",avg);
}
