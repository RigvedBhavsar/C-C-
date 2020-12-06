//Accept thre number and check where that number is prime or not .

#include<stdio.h>
typedef	 int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckPrime(int iNumber)
{
	int i=0;
	for(i= iNumber/2; i >1;i--)
	{
		if((iNumber % i)==0)
		{
			break;
		}
	}
	if(i==1)
	{
		printf("Prime Number\n");
		return TRUE;
	}
	else
	{
		printf("Not Prime Number \n");
		return FALSE;
	}
}




int main()
{
	int iNumber=0;
	BOOL bRet1 ;
	
	printf("Enter the number");
	scanf("%d",&iNumber);
	
	bRet1=CheckPrime(iNumber);
	
	return 0;
}
