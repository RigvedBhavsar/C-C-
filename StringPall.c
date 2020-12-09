//Accept the string from user and check whether that string is pallindromen or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

    if(str==NULL)
    {
        return -1;
    }

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        if(*start != *end)
        {
            break;
        }
        else
        {
            start++;
            end--;
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

    char arr[20];
    BOOL bret=FALSE;


    printf("Enter the String:\n");
    scanf("%[^'\n']s", arr);

    bret = CheckPallindrome(arr);

    if(bret==FALSE)
    {
        printf("Not Pallindrome");
    }
    else 
    {
        printf("Pallindrome");
    }

    return 0;
}