//Accept the number from the user and check whether the 9 , 10 , 11 and 25th BIT is ON or OFF.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;


BOOL checkBit(int Number)
{
    UINT iMask = 0;
    UINT iResult=0;

    iMask = 0x01000700;

    iResult=Number & iMask;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    UINT number =0;

    BOOL bret=FALSE;

    printf("Enter Number \n");
    scanf("%d",&number);

    bret=checkBit(number);

    if(bret==TRUE)
    {
        printf("Bits are ON\n");
    }   
    else
    {
        printf("Bits are OFF\n");
    }
    return 0;
}