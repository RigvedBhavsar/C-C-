//Accept the number from user and finds its factors

#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter the number");
    scanf("%d",&num);

    factorial(num);
    return 0;
}

void factorial(int no)
{
    int i=0;

    for(i=1;i<=no/2;i++)
    {
        if((no%i)==0)
        {
            printf("%d",i);
        }
    }
}