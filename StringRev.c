//Accept the string from user and reverse the content of that string inplace.
//Complexity : n +(n/2)
#include<stdio.h>

void StringRevInplacr(char *str)
{
    char temp;
    char *start=NULL;
    char *end=NULL;

    if(str==NULL)
    {
        return;
    }

    start=str;
    end=str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[20];

    printf("Enter String");
    scanf("%[^'\n]s",arr);

    StringRevInplacr(arr);
    
    return 0;
}