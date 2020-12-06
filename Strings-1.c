//Problems on String 

#include<stdio.h>
#define TRUE 1
#define FALSE 0


typedef int BOOL;

void CountCapital(char *str) 
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str >='A')&&(*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    printf("%d",iCnt);

}

BOOL CheckVowel(char *str)
{
    if(str==NULL)
    {
        return 0 ;
    }

    while (*str != '\0')
    {
        if((*str=='a')||(*str=='A')||(*str=='e')||(*str=='E')||
        (*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        
        str++;
    }
}

void StringRev(char *Str)       //Fuction failed
{
    int iCnt=0,i=0;
    char temp[20];

    while (*Str !='\0')
    {
        iCnt++;
        Str++;
    }
    iCnt--;

    for(iCnt;iCnt>0;iCnt--,i++)
    {
        temp[i]=Str[iCnt];
    }
    printf("%s",temp);
}

void ToggleCase(char *str)
{
    while (*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        else if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
       // printf("%c",*str);
        str++;   
    }
}

BOOL CheckOccur(char *str, char ch)
{
    BOOL flag=FALSE;
    if(str==NULL)
    {
        return -1;

    }

    while (*str != '\0')
    {
        if(*str == ch)
        {
            flag=TRUE;
            break;
        }
        str++;
    }
    return flag;
}



void StrCpyRev(char *src, char *dest)
{
    char *start=NULL;
    char *end=NULL;

    if(src ==NULL)
    {
        return;
    }

    start=src;
    end=src;

    while (*end !='\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        *dest=*end;
        dest++;
        end--;
    }
    *dest='\0';
}
void StrCpyTog(char *src, char *dest)
{

    while(*src != '\0')
    {
        if((*src >='A') && (*src<= 'Z'))
        {
            *dest=*src+32;
        }
        else if ((*src >= 'a') && (*src<='z'))
        {
            *dest=*src-32;
        }
        src++;
        dest++;
    }
    *dest='\0';
    printf("%s",dest);
}



int main()
{
    char arr[30];
    char brr[30];
    int iRet=0;
    BOOL flag=FALSE;
    char ch='\0';

    printf("Enter The String");
    scanf("%[^'\n']s",arr);

    CountCapital(arr);
    
    flag=CheckVowel(arr);
    
    if(flag==TRUE)
    {
        printf("Occurs");
    }
    else
    {
        printf("Does Not Occurs");
    }

    StringRev(arr);

    ToggleCase(arr);
    printf("%s",arr);
   
    printf("Enter Character To be Searched");
    scanf("%c",&ch);

    flag=CheckOccur(arr, ch);
    if(flag==TRUE)
    {
        printf("Occur");
    }   
    else
    {
        printf("Does Not occur");
    }

    StrCpyRev(arr,brr);
    StrCpyTog(arr,brr);
    printf("%s",brr);
    return 0;
}
