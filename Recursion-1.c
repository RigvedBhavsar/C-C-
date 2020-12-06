//Assignment on Recsursion
#include<stdio.h>

//Q1 print the pattern 

void patter1(int iNo)
{
    int i=0;

    for(i=0;i<iNo;i++)
    {
        printf("\t*");
    }
}

void PatterR(int ino)
{
    static int i=1;

    if(i<=ino)
    {
        printf("*\t");
        i++;
        PatterR(ino);
    }
}

int main()
{
    PatterR(5);
    return 0;
}