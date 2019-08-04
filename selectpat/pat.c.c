#include <stdio.h>
#include <stdlib.h>
#include "selectpat.h.h"


void patern47()
{
     int i,k,j;
    for( i=0;i<4;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");

        }


        for( k=7-i;k>i;k--)
        {
            printf("*");

        }
        printf("\n");

    }
}

void patern6()
{
    	int i,j,k;
    for(i=5;i>0;i--)
    {
        for( j=1;j<6;j++)
        {
            printf("%d",i);

        }



        printf("\n");

    }
}

void patern10()
{

    int i,j,k;
    for( i=0;i<5;i++)
    {
        for( j=0;j<i+1;j++)
        {
            printf("*");

        }



        printf("\n");

    }
}

void patern15()
{

 int i,j,k;
    for( i=0;i<5;i++)
    {
        for( j=5;j>i;j--)
        {
            printf("*");

        }





        printf("\n");

    }
}

void patern34pyr()
{

    int i,j,k;
    for( i=0;i<5;i++)
    {
        for( j=4;j>i;j--)
        {
            printf(" ");

        }


for( j=0;j<i+1;j++)
{
        printf("*");

}

for( j=0;j<i;j++)
{
        printf("*");

}


        printf("\n");

    }

}

void patern54()
{
   int i,j,k;
    for( i=0;i<4;i++)
    {
        for( j=0;j<i+1;j++)
        {
            printf("*");

        }
        printf("\n");

    }
    for( i=0;i<3;i++)
    {
        for( j=3;j>i;j--)
        {
            printf("*");

        }
        printf("\n");

    }
}
