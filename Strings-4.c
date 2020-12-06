//Assigment 39
#include<stdio.h>
//Q1 Accept two string form user and Displys its length

void Strlength(char *str1, char *str2)
{
    int length1=0,length2=0;

    while(*str1 !='\0')
    {
        length1++;
        str1++;
    }
    while (*str2 !='\0')
    {
        length2++;
        str2++;
    }
    printf("%d \t %d",length1, length2);
}

//Q2 Accept two string and display the count of capital characters
void StrCapCount(char *str1, char *str2)
{
    int length1=0,length2=0;

    while (*str1 != '\0')
    {
        if((*str1 >= 'A') && (*str1 <= 'Z'))
        {
            length1++;
        }
        str1++;
    }

    while(*str2 !='\0')
    {
        if((*str2 >= 'A') && (*str2 <= 'Z'))
        {
            length2++;
        }
        str2++;
    }

    printf("%d %d", length1, length2);
}
//Q3 Accept two string from user and comapare the contents (Case Insensitive)
void StrCmpIns(char *str1, char *str2)
{

    while((*str1 !='\0')&&(*str2 != '\0'))
    {
        if((*str1 == *str2) || (*str1 == *str2+32) || (*str1 == *str2-32))
        {
            str1++;
            str2++;
        }
        else
        {
            break;
        } 
    }

    if((*str1=='\0')&&(*str2=='\0'))
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}
//Q4 accept two string and and Concat the alternate letter of second string into first

void StrCatAlt(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        if((*dest != '\0'))
        {
            *src=*dest;
            src++;
            dest=dest+2;
        }
    }  
}

//Q5 Accept two String From user anf Concat the second string in rerverse order

void StrCatRev(char *src, char *dest)
{
    char *start, *end;
    //Filer
    while (*src != '\0')
    {
        src++;
    }

    start =dest;
    end=dest;

    while (*end != '\0')
    {
        end ++;
    }
    end--;
    
    while (start<=end)
    {
        *src=*end;
        end--;
        src++;
    }
    
}

int main()
{
    char arr[30]="MarveLLous";
    char brr[30]="Infosystem";
    //StrCapCount(arr,brr);
    //StrCmpIns(arr,brr);
    
    StrCatRev(arr,brr);
    printf("%s",arr);
    
    return 0;
}