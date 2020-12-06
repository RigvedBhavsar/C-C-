//write the program to print pattern (matrix representation)
#include<stdio.h>

void MatrixPattern1(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(j<i)
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

void MatrixPattern2(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if((i+j) < iRow)
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

void MatrixPattern3(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(j<=i)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

void MatrixPattern4(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if((i+j) == iCol-1)
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

void MatrixPattern5(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(((i+j)==iCol-1) || (i==0) || i==(iRow-1) || (j==0) ||j==(iCol-1) )
            {
                printf("*\t");
            }
            else if((i+j)<iRow)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
            
        }
        printf("\n");
    }
}


int main()
{
    int Rows=0,Cols=0;

    printf("Enter number of Rows");
    scanf("%d",&Rows);

    printf("Enter number of Cols");
    scanf("%d",&Cols);
    MatrixPattern1(Rows,Cols);
    printf("-------------------------\n");

    MatrixPattern2(Rows,Cols);
    printf("-------------------------\n");

    MatrixPattern3(Rows,Cols);
    printf("-------------------------\n");

    MatrixPattern4(Rows,Cols);
    printf("-------------------------\n");
    MatrixPattern5(Rows,Cols);
    return 0;
}