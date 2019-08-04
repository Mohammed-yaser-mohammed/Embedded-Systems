#include <stdio.h>
#include<stdlib.h>
#include "selectpat.h.h"

// ## Printing numbered Patterns as labeled
// author : Mohammed yaser
// inputs :
// 1 - integer that represents the number of pattern you want to print
// return : The pattern in stars

 void main()
{
    int x;
    printf("This program prints various patterns in stars so please choose the number of the pattern you need to print\n");
     printf("1.\t  54 \n");
      printf("1.\t  6 \n");

        printf("1.\t  34 \n");
         printf("1.\t  47 \n");
          printf("1.\t  10 \n");
           printf("1.\t  15 \n");

           while(x!=0){
    scanf("%d",&x);

    switch (x)
    {
        case 54: patern54();
        break;
         case 47: patern47();
        break;

         case 10: patern10();
        break;
         case 6: patern6();
        break;
         case 15: patern15();
        break;
         case 34: patern34pyr();
        break;
        case 0 : break;

        default : printf("choose again");
        break;


    }

           }

}
