//Assignment 38 (LB-13)
// Q1 Accept string from user and print below pattern
#include<stdio.h>

void Pattern1(char *str)
{
    int len=0;
    int iRow,iCol;
    char *temp=str;

    int i=0, j=0;
    while(*temp != '\0')
    {
        len++;
        temp++;
    }
    temp=str;
   
    iRow=len;
    iCol=len;
    
    for(i=0;i<iRow;i++)
    {
        str=temp;
        for(j=0;j<iCol;j++)
        {
            printf("%c\t",*str);
            str++;
        }
        printf("\n");
    }
}

//Q2. Accept the String and print the pattern

void Pattern2(char *str)
{
    char *temp=str;
    int len=0;
    int i=0,j=0;
    int iCol;
    while (*temp != '\0')
    {
        len++;
        temp++;
    }
    iCol=len;
    temp=str;
    
    for(i=0;i<len;i++)
    {
        str=temp;
        for(j=0;j<iCol;j++)
        {
            printf("%c\t",*str);
            str++;
        }
        iCol--;
        printf("\n");
    }
}
//Q3 Accept String Form user and print the below patter
void Pattern3(char *str)
{
    char *temp=str;
    int length=0;
    int i,j;
    
    while (*temp !='\0')
    {
        length++;
        temp++;
    }
    temp=str;
    for(i=0;i<length;i++)
    {
        str=temp;
        for(j=0;j<=i;j++)
        {
            printf("%c\t",*str);
            str++;
        }
        printf("\n");
    }
}

//print pattern 

void Pattern4(char *str)
{
    int length=0;
    char *temp=str;
    int iRow,iCol;
    int i=0,j=0;

    while(*temp != '\0')
    {
        length++;
        temp++;
    }

    temp=str;
    iRow=length;
    iCol=length;

    if(length >= 5)
    {
        for(i=0;i<iRow;i++)
        {
            str=temp;
            for(j=0;j<iCol;j++)
            {
                printf("%c\t",*str);
                str++;
            }
            printf("\n");
        }
    }
    else if(length  < 5)
    {
        for(i=0;i<iRow;i++)
        {
            str=temp;
            for(j=0;j<=i;j++)
            {
                printf("%c\t",*str);
                str++;
            }
            printf("\n");
        }
    }
}
int main()
{
    char arr[20]="PPA";
    Pattern4(arr);
    return 0;
}