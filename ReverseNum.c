//Accept the NUmber from user and reverse that number 
#include <stdio.h>

void RevNum(int iNumber)
{
	int iDigit=0;
	int iRev=0;

	while(iNumber != 0)
	{
		iDigit=iNumber %10;
		iRev= (iRev*10)+iDigit;
		iNumber= iNumber/10;
	}
	printf("%d\n",iRev);
}

int main()
{
	int iNumber =0;

	printf("Enter the Number\n");
	scanf("%d",&iNumber);

	RevNum(iNumber);

	return 0;
}