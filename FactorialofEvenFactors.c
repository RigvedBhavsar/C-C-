//Write a program which accept the number from user and print the factorial of its even factors

#include<stdio.h>

int EvenFactorail(int no)
{
    int i=0;
    int iFact=1;
    int iOfact=1;
    
    for(i=no;i>0;i--)
    {
        if((i % 2)==0)
        {
            iFact=iFact*i;
        }
        else
        {
            iOfact=iOfact*i;
        }   
    }
    printf("%d",iFact-iOfact);
}


int main()
{
    int number=0;

    printf("Enter the Number");
    scanf("%d",&number);

    EvenFactorail(number);
    return 0;
}