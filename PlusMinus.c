//Plus Minus
#include<stdio.h>

void PlusMinus(int arr[], int iSize)
{
    int i=0;
    double PRatio=0;
    double NRatio=0;
    double ZRatio=0;

    for(i=0;i<iSize;i++) 
    {
        if(arr[i]>0)
        {
            PRatio++;
        }
        else if (arr[i]<0)
        {
            NRatio++;
        }
        else if(arr[i]==0)
        {
            ZRatio++;
        }
    }
    printf("%f",PRatio/iSize);
    printf("%f",NRatio/iSize);
    printf("%f",ZRatio/iSize);
    
}

int main()
{
    int arr[]={1,1,0,-1,-1};
    PlusMinus(arr,5);
    return 0;
}