//Accept an array from user and return the summation of all the element of the array

#include<stdio.h>
#include<malloc.h>
int main()
{
    int iSize=0;
    int i=0; 
    int *arr;
    int ret=0;
    printf("Enter The Size of the array");
    scanf("%d",&iSize);

    arr=(int*) malloc ( iSize * sizeof(int)); 
    
    printf("Enter the Elemwnt of The array");

    
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements of array");
    for(i=0;i<iSize;i++)
    {
        printf("%d",arr[i]);
    }
    ret=arraySum(arr,iSize);
    printf("Sum of array is %d",ret);
    return 0;
}

int arraySum(int arr[], int size)
{
    int iSum=0;
    int i=0;
    for(i=0;i<size;i++)
    {
       iSum=iSum+arr[i];
    }   
    return iSum;
}