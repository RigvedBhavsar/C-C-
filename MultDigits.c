//Write a program which accept number from user and display its Multiplication of Digits.

#include<stdio.h>



void MultDigit(int no)
{
    int digit=0;
    int imult=1;

    while(no != 0)
    {
        digit=no % 10;
        if(digit != 0)
        {
            imult=imult*digit;
        }
        
        no = no / 10;
    }
    printf("%d",imult);
}

int main()
{
    int number=0;

    printf("ENtyer the NUmner");
    scanf("%d",&number);

 //   DisplayDigitRev(number);
    MultDigit(number);
    return 0;
}