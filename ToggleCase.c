//Accept the string from user and toggle the case.

#include<stdio.h>

void ToggleCase(char *str)
{
    if(str==NULL)
    {
        return ;
    }

    while(*str != '\0')
    {
        if((*str>='A')&&(*str <='Z'))
        {
            printf("%c",*str+32);
            // *str=*str+32;
        }
        else if ((*str>='a')&&(*str<='z'))
        {
            printf("%c",*str-32);
            // *str=*str-32;
        }
        str++;
    }
}


int main()
{
    char arr[20];
    
    printf("Enter String\n");
    scanf("%[^'\n]s",arr);
    
    ToggleCase(arr);

    return 0;
}