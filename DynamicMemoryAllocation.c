//Problems on Array or Dynamic memory allocation

#include<stdio.h>
#include<malloc.h>

int DiffArr(int arr[], int iSize)
{
    int i=0;
    int Esum=0;
    int Osum=0;

    for(i=0;i<iSize;i++)
    {
        if(arr[i]%2==0)
        {
            Esum=Esum+arr[i];
        }
        else
        {
            Osum=Osum+arr[i];
        }
    }
    return Esum-Osum;
}

void DigitDisplay(int arr[], int iSize)
{

    int i=0;
    int iDigit=0;
    int iNum=0;
    int iCnt=0;

    for(i=0;i<iSize;i++)
    {
        iNum=arr[i];
        iCnt=0;
        
        while(iNum != 0)
        {
            iDigit=iNum%10;
            iCnt++;
            iNum=iNum / 10;
        }

        if(iCnt==3)
        {
            printf("%d",arr[i]);
        }
    }

}

void ArrayDigitSum(int arr[], int iSize)
{
    int i=0,iSum=0,iDidit=0,iNum=0;

    for(i=0;i<iSize;i++)
    {
        iNum=arr[i];
        iSum=0;
        while (iNum != 0)
        {
            iDidit=iNum % 10;
            iSum=iSum + iDidit;
            iNum=iNum / 10;
        }

        printf("%d\t",iSum);        
    }
}

int main()
{

    int i=0,size=0;
    int *Arr=0;
    int Ret=0;
    printf("Enter the number of Element");
    scanf("%d",&size);

    Arr=(int *) malloc(size* sizeof(int));

    printf("Enter the array Elements");

    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }

  //  Ret=DiffArr(Arr,size);
  //  DigitDisplay(Arr,size);
    ArrayDigitSum(Arr,size);
    
    
 //   printf("%d",Ret);
    return 0;
}