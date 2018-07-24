#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,a[5];
   printf("enter 5 numbers :");
    for(i=0;i<5;i++)
   scanf("%d",&a[i]);
   for(i=0;i<5;i++)
    sum=sum+a[i];
   printf("sum =%d",sum);
}
