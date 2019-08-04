#include <stdio.h>
#include <stdlib.h>

// ## Average and Sum of an Array
// author : Mohammed yaser
// inputs :
// 1 - array

// return : int - Sum , Ave
int main()
{
    int i,sum=0,ave=0;
  int x[10]={0};
  for(i=0;i<10;i++)
    {
       scanf("%d",&x[i]);
    }
    sum=arraysum(x);
    ave=arrayave(x);

    printf("Sum of array = %d \n Average of array = %d",sum,ave);

    return 0;
}
