//Write a program which accept number from user and print the factorial of that number

#include<stdio.h>

void Factorial(int number)
{
    int i=0;
    int ifact=1;
    
    if(number < 0 )
    {
        number=-number;
    }

    for(i=number;i>0;i--)
    {
        ifact=ifact*i;
    }
    printf("Factorial of given number is %d ",ifact);
}

int main()
{
    int no=0;
    printf("Enter the Number");
    scanf("%d",&no);

    Factorial(no);
    return 0;
}
