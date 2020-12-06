//Accept the Number from user and check whether that number is pallindrome or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckPallindrome(int iNumber)
{
	int iDigit=0, Temp=0, iRev=0;
	Temp=iNumber;
	while(iNumber != 0)
	{
		iDigit=iNumber %10;
		iRev= (iRev*10)+iDigit;
		iNumber= iNumber/10;
	}

	if(iRev == Temp)
	{
		printf("Number is pallindrome\n");
		return TRUE;
	}
	else
	{
		printf("Number is Not pallindrome\n");
		return FALSE;
	}
}

int main()
{
	int iNumber =0;
	BOOL bRet=FALSE;

	printf("Enter the Number\n");
	scanf("%d",&iNumber);

	bRet=CheckPallindrome(iNumber);

	return 0;
}