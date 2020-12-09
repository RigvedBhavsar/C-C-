//accept matrix from user and and return its addition of elements.

#include<stdio.h>
#include<malloc.h>

int SumDiagonal(int **arr, int iRow , int iCol)
{
    int iSum=0,i=0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            iSum= iSum+ arr[i][j];
        }
    }
    return iSum;
}


int main()
{
    int **p=NULL;
    int iRow=0,iCol=0,iRet=0;
    int i=0,j=0;

    printf("Enter Number of Rows");
    scanf("%d",&iRow);

    printf("Enter Number of Cols");
    scanf("%d",&iCol);

    p=(int**)malloc(iRow*sizeof(int*));
    for(i=0;i<iRow;i++)
    {
        p[i]=(int*)malloc(iCol*sizeof(int));
    }

    printf("Enter the elements of 2-D Array\n");
    
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    iRet=SumDiagonal(p,iRow,iCol);
    printf("Sum is %d",iRet);
    
    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}
