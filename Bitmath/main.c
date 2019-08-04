#include <stdio.h>
#include <stdlib.h>

// ## Make mathematical operations on the bits
// author : Mohammed yaser
// inputs :
// 1 - ??? as register
// 2 - no. of bit as int

// return : void
void Set_bit(register a,int bit)
{
    a=a|(1<<bit);
}
void Clear_bit(register a, int bit)
{
    a=a&(~(1<<bit));
}
void Toggle_bit(register a,int bit)
{
    a=a^1<<bit;
}
void Read_bit(register a,int bit)
{
    a=a & (1<<bit);
}

