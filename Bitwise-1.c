//Problems On Bitwise Operator 
//Bit Start From 1 and ends with 32 (right to left )
//It depends from where you are starting bit Counting (0 or 1)
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;
//
BOOL CheckBit(UINT ino)
{
    UINT iresult=0;
    UINT iMask=0x00008000;

    iresult= ino & iMask;

    if(iresult == iMask)
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
    UINT number;
    BOOL bret=FALSE;

    printf("Enter Number");
    scanf("%d",&number);

    bret=CheckBit(number);
    if(bret==TRUE)
    {
        printf("BIT is ON");
    }
    else
    {
        printf("Bit is OFF");
    }
    
    
    return 0;   
}