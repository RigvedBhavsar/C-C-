//Accept N numbers form user and display the numbes who have 3 digits
#include<stdio.h>
#include<malloc.h>

void Display(int Arr[], int iSize)
{
    int iDigit=0;
    int iCnt=0;
    int i=0;
    int iNumber=0;
    for(i=0;i<iSize;i++)
    {
        iNumber= Arr[i];
        iCnt=0;
        while(iNumber!=0)
        {
            iDigit=iNumber%10;
            iCnt++;
            iNumber= iNumber/10;
        }
        if(iCnt==3)
        {
            printf("\n%d",Arr[i]);
        }
    }
}
int main()
{
    int iSize=0;
    int *Arr;
    int i=0;
    printf("Enter the Size of the Array");
    scanf("%d",&iSize);

    Arr=(int*) malloc(iSize*sizeof(int));

    printf("Enyter the Element of the Array");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Array is \n");
    for(i=0;i<iSize;i++)
    {
        printf("%d\t",Arr[i]);
    }
    Display(Arr,iSize);
    return 0;
}