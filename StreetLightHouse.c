/*Accept matrix from user and that matrix contains only two values as 1 and 2
2 indicates House 
1 indicates Street Light

we have to detect such house which contains all the paths that contains street light.
*/
#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


void DisplayHouse(int **arr, int iRow , int iCol)
{
    int i=0, j=0;
    int a=0, b=0, c=0, d=0;
    BOOL flag = TRUE;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(arr[i][j]==2)
            {
                for(a=0;a<j;a++)    //Upside to downside till element
                {
                    if(arr[i][a] != 1)
                    {
                        flag=FALSE;
                        break;
                    }
                }
                for(b=j+1;(b<iCol)&&(flag==TRUE); b++) //upside to Downside from element
                {
                    if(arr[i][b]!=1)
                    {
                        flag=FALSE;
                        break;
                    }
                }
                for(c=0;(c<i)&&(flag==TRUE);c++) //Left to Right till element
                {
                    if(arr[c][j]!=1)
                    {
                        flag=FALSE;
                        break;
                    }
                }
                for(d=i+1 ; (d<iRow)&&(flag==TRUE);d++)
                {
                    if(arr[d][j]!=1)
                    {
                        flag=FALSE;
                        break;
                    }
                }

                if (flag==TRUE)
                {
                    printf("House Occured at postion %d ,%d",i ,j);
                }
            }
            flag=TRUE;
        }
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

    DisplayHouse(p,iRow, iCol);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}