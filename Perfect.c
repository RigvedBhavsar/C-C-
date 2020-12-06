//Accept the number and Check whether that number is perfect or not .

#include<stdio.h>
typedef	 int BOOL;
#define TRUE 1
#define FALSE 0


BOOL CheckPerfect(int iNumber)
{
	int i=0;
	int iSum=0;

	for(i =iNumber/2;((i>=1)&&(iSum<=iNumber));i--)
	{
		if((iNumber % i)==0)
		{
			iSum=iSum+i;
		}
	}
	if(iSum==iNumber)
	{
		printf("Perfect Number \n");
		return TRUE;
	}
	else
	{
		printf("NOt Perfect Number \n");
		return FALSE;
	}
}


int main()
{
	int iNumber=0;
	BOOL bRet2;
	
	printf("Enter the number");
	scanf("%d",&iNumber);
	
	bRet2=CheckPerfect(iNumber);
	return 0;
}