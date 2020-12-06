//Assignment 55 On 2-D matrix
#include<stdio.h>
#include<malloc.h>

//Q1 Accept the matrix and transpose the matrix

void Transpose(int **arr, int irow, int icol)
{
    int i=0;
    int j=0;
    int **tran=NULL;

    tran =(int**)malloc(irow*sizeof(int*));
    for(i=0;i<irow;i++)
    {
        tran[i]=(int*)malloc(icol*sizeof(int));
    }

    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            tran[j][i] = arr[i][j];
        }
    }

    printf("The transposed matrix is \n");

    for(int i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            printf("%d\t",tran[i][j]);
        }
        printf("\n");
    }
}
//Q2 Reverse the contents of each row

void ReverseRow(int **arr, int irow , int icol)
{
    int i=0;
    int j=0;
    int temp=0;
    int k=0;
    int last=0;

    for(i=0;i<irow;i++)
    {   k=0;
        last=icol;
        for(j=0;j<icol && k<(icol/2) ;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][last-1];
            arr[i][last-1]=temp;
            k++;
            last--;
        }
    }   
    
    printf("After reversinng the Contents of Each Row\n");

    for(int i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
//Q3 Reverse the contents of each column
void ReverseCol(int **arr, int irow , int icol)
{
    int i=0;
    int j=0;
    int temp=0;
    int k=0;
    int last=irow;

    for(i=0;i<irow, k<(irow/2);i++,k++,last--)
    {   
        for(j=0;j<icol ;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[last-1][j];
            arr[last-1][j]=temp;
        }  
    }   

    printf("After reversing the Column elements\n");
    for(int i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void CheckIdentity(int **arr , int irow, int icol)
{
    int i=0;
    int j=0;

    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            if(i==j)
            {
                if(arr[i][j]!=1)
                {
                    break;
                }
            }
            else
            {
                if(arr[i][j]!=0)
                {
                    break;
                }
            }
        }
    }
    if(i==irow && j==icol)
    {
        printf("Identity Matrix\n");
    }
    else
    {
        printf("Not Identity Matrix\n");
    }
}

//Q5 Check matrix is parse matrix or not 

void CheckParse(int **arr, int irow , int icol)
{
    int i=0;
    int j=0;
    int iCnt=0;
    for(i=0; i<irow && iCnt<=((irow*icol)/2) ; i++)
    {
        for(j=0 ; j<icol && iCnt<=((irow*icol)/2) ; j++)
        {
            if(arr[i][j]==0)
            {
                iCnt++;
            }
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    if(iCnt > (irow*icol)/2)
    {
        printf("It Is Parse Matrix");
    }
    else
    {
        printf("It is Not Parse Matrix");
    }
}
int main()
{
    int **p=NULL;
    int irow=0;
    int icol=0;
    int i=0;
    int j=0;

    printf("Enter the Number of Rows");
    scanf("%d",&irow);

    printf("Enter the Mumber of colos");
    scanf("%d",&icol);

    p=(int**)malloc(irow * sizeof(int*));
    for(i =0; i<irow;i++)
    {
        p[i]=(int*)malloc(icol*sizeof(int));
    }

    printf("Enter the elements");
    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    printf("The matrix is \n");
    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }

//    Transpose(p, irow, icol);

//    ReverseRow(p, irow, icol);

//    ReverseCol(p,irow, icol);
//    CheckIdentity(p, irow, icol);

    CheckParse(p, irow, icol);  
    for(i=0;i<irow;i++)
    {
        free (p[i]);
    }
    free(p);

    return 0;
}