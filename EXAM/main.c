#include <stdio.h>
#include <stdlib.h>
#include <EXAM-.h>
struct List
{
    int data;
    int *next;
};

list *head;

void create1stnode(void)
{
    head=(struct node*)malloc(sizeof(struct node));
    head->nextnode=NULL ;
}

void createnewnode(void)
{
    struct node *image_ptr;
    image_ptr = head ;
    for(;;)
    {
        if(image_ptr->nextnode==NULL)break;
        image_ptr = image_ptr->nextnode ;
    }
    image_ptr->nextnode=(struct node*)malloc(sizeof(struct node));
     image_ptr->nextnode->nextnode=NULL;
}

list fill(int d1,int d2,int d3,int d4,int d5)
{
    head->d=d1;
    head->next->d=d2;
    head->next->next->d=d3;
    head->next->next->next->d=d4;
    head->next->next->next->next->d=d5;
}

void LL(void)
{
    create1stnode();
 createnewnode();
 createnewnode();
 createnewnode();
 createnewnode();

}












void pstar(void)
{
    int i,j,k,l;
    for(i=0;i<4;i++)
    {

        for(j=1;j<i+2;j++)
        {
            printf(" ");
        }


for( j=3-i;j>0;j--)
{
        printf("*");

}

for( j=0;j<4-i;j++)
{
        printf("*");

}
         printf("\n");
    }












     for( i=0;i<4;i++)
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








void func(u8 reg1,u8 reg2,b1,b2)
{ int i,j,k;
   i= get_bit(reg1,b1);
     j=get_bit(reg2,b2);
    if(i==1)set_bit(reg2,b2);
    else clear_bit(reg2,b2);
     if(j==1)set_bit(reg1,b1);
    else clear_bit(reg1,b1);
}
}














void order(int *a, int sz)
{
    int i,j,tmp=0;
    for(i=0;i<sz;i++)
    {
        for(j=0;j<sz;j++)
        {
            if(a[i]<a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }

        }
    }

}










void max2(int *a,int sz)
{
    int max1=a[0],max2=a[0],i;
    for(i=0;i<sz;i++)
    {
        if(a[i]>max1)
        {
            max2=a[i];
            //swap
            int tmp;
            tmp=max1;
            max1=max2;
            max2=tmp;
        }
    }
    printf("max1 = %d, max2 = %d",max1,max2);
}


int dectobin(int x)
{
    int i=0,k;
    for(k=0;k<x;k++)
{


 if (x%2==1)printf("1");
    else printf("0");
 x=x/2;
}
}



{
    int i,j=0;
    for(i=1;i<100;i++)
    {

for(j=1;j<98;j++)
    {

     if (i==j)break;

     if(i%j==0 )
        {
            printf("notprime");
            break;
        }
        else {printf("prime = %d\n",i);
        break;}

    }





    }









    int dectobin(int x)
{
    int i=0,k;
    for(k=0;k<x;k++)
{


 if (x%2==1)printf("1");
    else printf("0");
 x=x/2;
}
}
