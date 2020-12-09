//Accept the matrix from user and check whether that matrix is Toeplitz matrix or Not.
//Toeplitz matrrix is such matrix which contains all the identical diagonal element.

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL isToeplitz(int **arr , int iRow , int iCol)
{
    int i=0,j=0;
    BOOL flag=TRUE;

    for(i=0 ; (i<iRow-1)&&(flag==TRUE) ; i++)
    {
        for(j=0 ; (j<iCol-1);j++)
        {
            if(arr[i][j] != arr[i+1][j+1] )
            {
                flag=FALSE;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int **p=NULL;
    int iRow=0,iCol=0,iRet=0;
    int i=0,j=0;
    BOOL bret=FALSE;

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

    bret = isToeplitz(p , iRow , iCol);    
    if(bret==FALSE)
    {
        printf("Not Toeplitz Matrix");
    }
    else if(bret==TRUE)
    {
        printf("Toeplitz Matrix");
    }
    
    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);

    return 0;
}