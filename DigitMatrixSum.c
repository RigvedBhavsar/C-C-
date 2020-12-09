//Accept matrix from user and replace the  value of the last coloum with summation of all 
//digits from particulat row

#include<stdio.h>
#include<malloc.h>


void DigitMatrixSum(int **arr , int iRow , int iCol)
{
    int i=0, j=0 , No=0 ,iSum =0, iDigit=0;

    for(i=0;i<iRow;i++)
    {
        iSum=0;
        for(j=0;j<iCol;j++)
        {
            No=arr[i][j];
            while(No != 0)
            {
                iDigit=No % 10;
                iSum=iSum+iDigit;
                No=No/10;
            }
        }
        arr[i][j-1]=iSum;
    }
}

int main()
{
    int **p=NULL;
    int iRow=0,iCol=0;
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
    
    DigitMatrixSum(p,iRow, iCol);
    
    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}