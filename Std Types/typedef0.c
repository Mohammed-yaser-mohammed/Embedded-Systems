#include<stdio.h>
#include<stdlib.h>

// ## Defining New or Global data types
// author : Mohammed yaser

main()
{
   typedef unsigned char u8;
      typedef signed char s8;

         typedef unsigned short int u16;
            typedef signed short int s16;

               typedef unsigned int u32;
                  typedef signed int s32;

                     typedef float F32;
                        typedef  double F64;
                           typedef long double F96;

                           printf("%d",sizeof(F96));

    return 0;
}
