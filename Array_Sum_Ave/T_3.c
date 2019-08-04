#include <stdio.h>
#include <stdlib.h>
int arraysum(int a[])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
       sum=sum+a[i];
    }
    return sum;
}

int arrayave(int a[])
{
    int ave=0;
   ave= arraysum(a)/10;
    return ave;
}
