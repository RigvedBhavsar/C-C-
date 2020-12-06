//write the program to print the pattern 
#include<stdio.h>

void Pattern1(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

void Pattern2(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
           printf("%d\t",j);
        }
        printf("\n");
    }
}
void Pattern3(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if((j%2)==0)
            {
            printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

void Pattern4(int iRow, int iCol)
{
    int i=0,j=0;
    char ch='A';
    for(i=0;i<iRow;i++)
    {
        for(j=0,ch='A';j<iCol;j++,ch++)
        {
            if((iRow % 2 ) == 0)
            {
                printf("%c",ch);
            }
            else
            {
                printf("%c",(ch+32));
            }
            
        }
        printf("\n");
    }
}

void Pattern5(int iRow, int iCol)
{
    int i=0,j=0;
    int num=1;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
           printf("%d\t",num);
           num++;
        }
        printf("\n");
    }
}

void Pattern6(int iRow, int iCol)
{
    int i=0,j=0;
    int num=1;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(num>9)
            {
                num=1;
            }
           printf("%d\t",num);
           num++;
        }
        printf("\n");
    }
}

void Pattern7(int iRow, int iCol)
{
    int i=0,j=0;
    int num=0;
    for(i=0;i<iRow;i++)
    {
        if((i % 2) == 0)
        {
            num=2;
            for(j=0;j<iCol;j++,num=num+2)
            {
                printf("%d",num);
            }
        }
        else
        {
            num=1;
            for(j=0;j<iCol;j++,num=num+2)
            {
                printf("%d",num);
            }
        }
        
        printf("\n");
    }
}

void Pattern8(int iRow, int iCol)
{
    int i=0,j=0;
    int number=1;
    for(i=1;i<=iRow;i++)
    {
        number =i;
        for(j=1;j<=iCol;j++,number++)
        {
            printf("%d",number);
        }
        printf("\n");
    }    

}

int main()
{
    int rows=0,cols=0;

    printf("Enter Number of Rows");
    scanf("%d",&rows);

    printf("Enter Number of Cols");
    scanf("%d",&cols);

    Pattern8(rows,cols);

    return 0;
}
