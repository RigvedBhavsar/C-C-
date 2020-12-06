//Write a program which accept number from user and print the table of that number
#include<stdio.h>
void Table(int no )
{
    int i=0;

    for(int i=1;i<11;i++)
    {
        printf("%d\n",no*i);
    }
}

void TableRev(int no )
{
    int i=0;

    for(int i=10;i>0;i--)
    {
        printf("%d\n",no*i);
    }
}


int main()
{
    int number=0;
    printf("Enter the Number");
    scanf("%d",&number);

    Table(number);
    TableRev(number);
    return 0;
}