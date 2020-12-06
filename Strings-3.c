//Assignment 37 (LB -13)
#include<stdio.h>

//Q1.Accept string Form User and count the number of Words in it
/*
int WordCoutn(char *src)        NOT WORKING
{
  int iCnt=0;
	
	if(src==NULL)
	{
		return 1;
	}

	while(*src!='\0')
	{
		if(*src==' ')
		{
			while((*src!=' ')&&(*src!='\0'))
			{
				src++;		
			}
		}
		else
		{
			iCnt++;
			while((*src!=' ')&&(*src!='\0'))
			{
				src++;		
			}	
		
		}
	}
	return iCnt;
}
*/

//Q2.Accept String From user And return lenght of largeest word

int WordLength(char *str)
{
    int max=0;
    int iCnt=0;
    if(*str==NULL)
    {
        return-1;
    }

    while (*str != '\0')
    {
        if(*str==' ')
        {
            while((*str ==' ')&&(*str !='\0'))
            {
                str++;
            }
            iCnt=0;
        }
        else
        {
            iCnt++;
            str++; 
        }      
        if(iCnt> max)
        {
            max=iCnt;
        }
    }
    return max;
}
//Q3. Accept string Form User and reverse each inplace

void StrWordRev(char *src)
{
	char *start=NULL,*end=NULL;
	char temp=NULL;
	
	if(src==NULL)
	{
		return 1;
	}

	while(*src!='\0')
	{
		if((*src==' ')&&(*src!='\0'))
		{
			src++;
		}
		else
		{
			start=src;
			end=src;
			while((*end!=' ')&&(*end!='\0'))
			{
				end++;
				src++;
			}
			end=end-1;
			while(start<=end)
			{
				temp=*end;
				*end=*start;
				*start=temp;
				start++;
				end--;
			}
		}
	}
}
//Q4. Accept string form user and copy the contents into another string by removing extra white saces

/*
void StrCpyremov(char *src, char *dest)         NOT WORKING 
{
    while(*src !='\0')
    {
        if((*src==' ')&&(*(src+1) ==' ')&&(*src != '\0'))
        {
            src++;
        }
        else if((*src == ' ')&&(*src != '\0'))
        {
            *dest = *src;
            dest++;
            src++;
        }
    }
}
*/

//Q5. Accept string from user and convert each letter of new word into cappital letter

void convertCap(char *src)
{
    char *start=NULL,*end=NULL;
	
	if(src==NULL)
	{
		return 1;
	}

	while(*src!='\0')
	{
		if(*src==' ')
		{
			while((*src==' ')&&(*src!='\0'))
			{
				src++;
			}
		}
		else
		{
			start=src;
			end=src;
			if((*start>='a')&&(*end<='z'))
			{
				*start=*start-32;
			}
			while((*end!=' ')&&(*end!='\0'))
			{
				end++;
				src++;
			}
		}
	}
}
int main()
{
    char arr[30]="Rigved Bhavsar";
    char brr[30];
    int Count=0;

    //Count=WordCoutn(arr);
    //Count=WordLength(arr);
    //printf("%d",Count);
    //StrWordRev(arr);
    StrCpyremov(arr,brr);
    printf("%s",brr);
    return 0;
}