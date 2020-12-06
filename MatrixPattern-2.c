//Assignment 40 (LB-13)
#include<stdio.h>

void Pattern1(int ino)
{
    int digit=0;
    int itemp=ino;
    int iCnt=0;
    int i=0;
    int j=0;

    while (itemp != 0)
    {
        iCnt++;
        itemp=itemp/10;
    }

    itemp=ino;
    while (ino != 0)
    {
        
        for(i=0 ; i<iCnt ; i++)
        {
            ino=itemp;
            for(j=0;j<iCnt;j++)
            {
                digit=ino % 10;
                printf("%d\t",digit);
                ino=ino/10;
            }
            printf("\n");
        }
        
    }
}
//Q2
void Pattern2(int ino)
{
    int iDigit=0;
    int iRev=0;
    int iCnt=0;
    int i=0;
    int j=0;

    while (ino != '\0')
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino=ino/10;
        iCnt++;
    }
    ino=iRev;

    for(i=0;i<iCnt;i++)
    {
        iRev=ino;
        for(j=0;j<iCnt;j++)
        {
            iDigit=iRev%10;
            printf("%d\t",iDigit);
            iRev=iRev/10;
        }
        printf("\n");
    }
}

//Q3
void Pattern3(int ino)
{
    int iDigit=0;
    int iRev=0;
    int iCnt=0;
    int i=0;
    int j=0;

    while (ino != '\0')
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino=ino/10;
        iCnt++;
    }
    ino=iRev;

    for(i=iCnt;i>0;i--)
    {
        iRev=ino;
        for(j=1;j<=i;j++)
        {
            iDigit=iRev%10;
            printf("%d\t",iDigit);
            iRev=iRev/10;
        }
        printf("\n");
    }
}

void Pattern4(int ino)
{
    int iDigit=0;
    int iRev=0;
    int iCnt=0;
    int i=0;
    int j=0;

    while (ino != '\0')
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino=ino/10;
        iCnt++;
    }
    ino=iRev;

    for(i=1;i<=iCnt;i++)
    {
        iRev=ino;
        for(j=0;j<i;j++)
        {
            iDigit=iRev%10;
            printf("%d\t",iDigit);
            iRev=iRev/10;
        }
        printf("\n");
    }
}
// Q5
void Pattern5(int ino)
{
    int digit=0;
    int itemp=ino;
    int iCnt=0;
    int i=0;
    int j=0;

    while (itemp != 0)
    {
        iCnt++;
        itemp=itemp/10;
    }

    itemp=ino;
    while (ino != 0)
    {
        
        for(i=1 ; i<=iCnt ; i++)
        {
            ino=itemp;
            for(j=0;j<i;j++)
            {
                digit=ino % 10;
                printf("%d\t",digit);
                ino=ino/10;
            }
            printf("\n");
        }
        
    }
}
int main()
{
    int ino=7846;
    Pattern5(ino);
    return 0;
}