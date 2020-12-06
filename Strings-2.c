//assignment 36 (LB-13)
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Q1 . Accept Two Strings and concat N numbers of second string into First string
//If third parameter is greater than size of 2nd String concat whole string
//      strcat()
void StrCat(char *src , char *dest, int cnt)        
{
    if((src==NULL) && (dest==NULL))
    {
        return ;
    }

    while (*src != '\0')
    {
        src++;
    }
    
    while ((*dest != '\0')&&(cnt != 0))
    {
        *src=*dest;
        dest++;
        src++;
        cnt--;
    }
    src='\0';
}

//Q2. Accept two string from user and compare the contents of that strings
//strcmp()

BOOL StrCmp(char *src, char *dest)
{
    if((src ==NULL)||(dest==NULL))
    {
        return FALSE;
    }

    while ((*src != '\0') &&(*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if((*src=='\0')&&(*dest=='\0'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//Q3. Accept string From User and Compare First N Characters From Strings are same or not
//      strNcmp()

BOOL StrNCmp(char *src, char *dest , int no)
{
    int i=0;
    if((src == NULL)||(dest==NULL))
    {
        return FALSE;
    }
    /* 
    //Using While Loop 
    while ((*src != '\0')&&(*dest != '\0')&&(no != 0))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
        no --;
    }
    */
    for(i=0 ; i < no && *src != '\0' && *dest != '\0' ; i++,src++, dest++)
    {
        if(*src != *dest)
        {
            break;
        }
    }

    if(i == no)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//Q4 Accept String From User and Reverse the contents by toggling the case
//      StrRevTog()

void StrRevTog(char *src)
{
    char *start=NULL;
    char *end=NULL;
    char temp;
    if(src == NULL)
    {
        return ;
    }

    start=src;
    end =src;

    while (*end != '\0')
    {
        end ++;
    }
    end --;
  /* NOT WORKING  
    while (start<=end)
    {
        if((*end>='A')&&(*end<='Z'))
        {
            *src=*end+32;
        }
        else if((*end>='a')&&(*end<='z'))
        {
            *src=*end-32;
        }
        end--;
        src++;
    }
    */
   while (*src != '\0')
   {
       if((*src>='A')&&(*src<='Z'))
       {
           *src=*src+32;
       }
       else if((*src >='a')&&(*src<='z'))
       {
           *src=*src-32;
       }
       src++;
   }
   
   while (start<end)
   {
       temp=*start;
       *start=*end;
       *end=temp;
       start++;
       end--;
   }
}
//Q5. Accept String from User and Check if it is pallindrome or not without considering its Case(case Insensitive)

BOOL CheckPallindrome(char *str)
{
    char *start;
    char *end;

    if(str== NULL)
    {
        return FALSE;
    }
    start=str;
    end=str;
    
    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
        if((*start == *end)||(*start == *end+32)||(*start == *end-32))
        {
            start++;
            end--;
        }
        else
        {
            break;
        }
    }

    if(start < end)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char arr[30]="abba";
    char brr[30]="Marellous";
    BOOL ret =FALSE;

//    StrCat(arr,brr,5);
//    printf("%s",arr);

    // ret=StrCmp(arr,brr);
    // ret= StrNCmp(arr,brr,5);
    // StrRevTog(arr);
    //  printf("%s",arr);
    ret=CheckPallindrome(arr);
    if(ret ==TRUE)
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
    return 0;
}