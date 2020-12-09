//accept matrix form user and check whether that matrix is identity matrix or not 

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL isIdentity(int **arr , int iRow , int iCol)
{
    int i=0, j=0;
    BOOL flag =TRUE;

    if(iRow!= iCol)
    {
        return FALSE;
    }

    for(i=0;i<iRow && (flag==TRUE);i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(i==j)
            {
                if(arr[i][j] != 1)
                {
                    flag=FALSE;
                    break;
                }
            }
            else 
            {
                if(arr[i][j] != 0)
                {
                    flag=FALSE;
                    break;
                }
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

    isIdentity(p , iRow , iCol);    
    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}