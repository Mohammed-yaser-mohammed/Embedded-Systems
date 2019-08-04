#include <stdio.h>
#include <stdlib.h>

// ## Counting the no. of the Pairs of each number in an array
// author : Mohammed yaser
// inputs :
// 1 - array as a pointer
// 2 - size as int

// return : int - No. of pairs

int a[11]={5,5,5,4,3,3,6,6,6,7,8};
int NoOfPairs(int *a,int sz);
int main()
{
    int m;
   m= NoOfPairs(&a,11);
   printf("Total No of Pairs = %d ",m);
   return 0;

}

   int NoOfPairs(int *a,int sz)
{
    int pairs=0,i,j,z;
    int count[10] ={0};
 for( i=0;i<sz;i++)
 {
     for( j=0;j<sz;j++)
     {
         if (a[j]==i)
         count[i]++;
     }

 }


for( z=0;z<sz-1;z++)
 {

    printf("Pairs of %d = %d\n",z,count[z]/2);
pairs =pairs + count[z]/2;
 }




 return pairs;
}


