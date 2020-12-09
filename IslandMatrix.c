/*Accept matrix from user , matrix contain two types of elements only that is 1 and 0
1 indicates Land
0 indicates Water

we have to find all such lans which are completly surrounded by water.
In a single matrix their may be posibility of zero or more such lands.
After getting such land we have to display its index.
*/


#include<stdio.h>
#include<malloc.h>

void checkIsland(int **arr, int iRow , int iCol)
{
    int i=0 , j=0  , iCnt=0;

    for(i=1;i<iRow-1;i++)
    {
        for(j=1;j<iCol-1;j++)
        {
            if(arr[i][j]==1)
            {
                if((arr[i-1][j-1]==0)&&
                    (arr[i-1][j]==0)&&
                    (arr[i-1][j+1]==0)&&
                    (arr[i][j+1]==0)&&
                    (arr[i+1][j+1]==0)&&
                    (arr[i+1][j]==0)&&
                    (arr[i+1][j-1]==0)&&
                    (arr[i][j-1])==0)
                {
                    printf("Island Occured at postion %d %d",i ,j);
                    iCnt++;
                }
            }
        }
    }
    printf("Total Island Occured are %d",iCnt);
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

    checkIsland(p,iRow, iCol);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);

    return 0;
}