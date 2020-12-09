//accept string from user and copy the alternate content into the another string.

#include<stdio.h>

void StringAlternateCat(char *src , char *dest)
{
    if((src==NULL)|| (dest==NULL))
    {
        return;
    }

    while(*src != '\0')
    {
        *dest = *src;
        if(*(src+1)=='\0')
        {
            dest++;
            break;
        }
        src=src+2;
        dest++;
    }
    *dest='\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the string ");
    scanf("%[^'\n]s", arr);

    StringAlternateCat(arr,brr);
    printf("\n%s",brr);
    return 0;
}

