//accept the string from user and copy that string 
//character into another string in reverse order.

#include<stdio.h>

void StringRevCopy(char *src , char *dest)
{
    char *start = NULL;
    char *end = NULL;

    if((src==NULL)||(dest==NULL))
    {
        return ;
    }
    start=src;
    end=src;

    while(*end != '\0')
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


int main()
{
    char arr[10]={'\0'};
    char brr[10]={'\0'};

    printf("Enter the String ");
    scanf("%[^\n]s",arr);

    StringRevCopy(arr,brr);

    printf("%s",brr);

    return 0;
}
