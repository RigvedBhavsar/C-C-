//accept the matrix from user and dispaly addition of all elements from each row separetly.

#include<stdio.h>
#include<malloc.h>

void SumRowSep(int **p , int iRow , int iCol)
{
    int iSum=0 , i=0 , j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            iSum=iSum+p[i][j];
        }
        printf("%d",iSum);
        iSum=0;
    }
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

    SumRowSep(p , iRow , iCol);    
    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}