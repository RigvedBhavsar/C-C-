//Assignment 41
#include<stdio.h>
//Q1
int Pattern1(int ino)
{
    int iDigit=0;
    int iRev=0;
    int i=0;
    while (ino !=0)
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino =ino/10;
    }
    
    while (iRev != 0)
    {
        iDigit=iRev % 10;
        for(i=0;i<iDigit;i++)
        {
            printf("*\t");
        }
        printf("\n");
        iRev=iRev/10;
    }
}
//Q2
int Pattern2(int ino)
{
    int iDigit=0;
    int i=0;

while (ino != 0)
    {
       iDigit=ino % 10;
       for(i=0;i<iDigit;i++)
       {
           printf("*\t");
       }
       printf("\n");
       ino=ino/10;
    }
}

//Q3
int Pattern3(int ino)
{
    int iDigit=0;
    int iRev=0;
    int i=0;
    while (ino !=0)
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino =ino/10;
    }
    
    while (iRev != 0)
    {
        iDigit=iRev % 10;
        for(i=1;i<=iDigit;i++)
        {
            printf("%d\t",i);
        }
        printf("\n");
        iRev=iRev/10;
    }
}

//Q4

int Pattern4(int ino)
{
    int iDigit=0;
    int iRev=0;
    int i=0;
    while (ino !=0)
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino =ino/10;
    }
    
    while (iRev != 0)
    {
        iDigit=iRev % 10;
        for(i=iDigit;i>0;i--)
        {
            printf("%d\t",i);
        }
        printf("\n");
        iRev=iRev/10;
    }
}
int Pattern5(int ino)
{
    int iDigit=0;
    int iRev=0;
    int i=0;
    while (ino !=0)
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino =ino/10;
    }
    
    while (iRev != 0)
    {
        iDigit=iRev % 10;
        printf("%d\t",iDigit);
        for(i=0;i<iDigit;i++)
        {
            printf("#\t");
        }
        printf("\n");
        iRev=iRev/10;
    }
}
int main()
{
    Pattern5(7846);
    return 0;
}