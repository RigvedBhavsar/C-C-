//Assignment 54 problwms on multidimensional array
#include<stdio.h>
#include<malloc.h>

//Q1 Addition of diagonal element
int AddDia(int **arr, int irows, int icol)
{
    int iSum=0;
    int i=0;
    int j=0;

    for(i=0;i<irows;i++)
    {
        for(j=0;j<icol;j++)
        {
            if(i==j)
            {
                iSum=iSum+arr[i][j];
            }
        }
    }
    return iSum;
}
//Q2 Frequency of Number in Matrix 
int FreqNum(int **arr, int irows , int icols, int numner)
{
    int iCount=0;
    int i=0;
    int j=0;

    for(i=0;i<irows;i++)
        {
    {
        for(j=0;j<icols;j++)
            if(arr[i][j]==numner)
            {
                iCount++;
            }
        }
    }
    return iCount;
}

//Q3 Return Largest Number From Both the Diagonal

int LargestNum(int **arr, int irows, int icols)
{
    int large=arr[0][0];
    int i=0;
    int j=0;

    for(i=0;i<irows;i++)
    {
        for(j=0;j<icols;j++)
        {
            if(((i==j) ||(i+j)== (icols-1)))
            {
                if(arr[i][j]> large)
                {
                    large=arr[i][j];
                }
            }
        }
    }
   return large;
}
//Q4 Addition of element of each coloumn
void DisplayColSum(int **arr, int irows, int icols)
{
    int iSum=0;
    int i=0;
    int j=0;

    for(i=0;i<irows;i++)
    {
        iSum=0;
        for(j=0;j<icols;j++)
        {
            iSum=iSum+arr[j][i];
        }
        printf("%d",iSum);
    }
}
//Q5 Swap the cosicutive row

void SwapRows(int **arr, int irow , int icol)
{
    int temp=0;
    int i=0;
    int j=0;

    for(i=0;i<irow;i=i+2)
    {
        for(j=0;j<icol;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i+1][j];
            arr[i+1][j]=temp;
        }
    }

    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
	int **P=NULL;
	int iRet=0,iRow=0,iCol=0,i=0,j=0;

	printf("Enter No of Rows");
	scanf("%d",&iRow);

	printf("ENter No of Coloumns");
	scanf("%d",&iCol);

	P=(int**)malloc(iRow* sizeof(int*));

	for(i=0;i<iRow;i++)
	{
		P[i]=(int*)malloc(iCol*sizeof(int));	
	}

	printf("Enter The Values");

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&P[i][j]);
		}
	}
	
    printf("Matrix is :\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",P[i][j]);
        }
        printf("\n");
    }
    SwapRows(P, iRow, iCol);

	for(i=0;i<iRow;i++)
	{
		free(P[i]);
	}
	free(P);
	
}
