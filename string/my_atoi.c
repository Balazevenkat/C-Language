#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int is_digit(char c)
{
    if(c>='0' && c<='9')
    return 1;
    
    else
    return 0;
}

int my_atoi(char *str)
{
    int num=0,isnegative=0;
    while(*str == ' ')
    str++;
    
    if(*str == '-')
    {
        isnegative=1;
        str++;
    }
    
    while(*str)
    {
        if(is_digit(*str))
        {
        num= num * 10 + (*str - '0');
        }
        else
        break;
        
        str++;
    }
    
    if(isnegative)
    {
    num=-num;
    return num;
    }
    
    return num;
    
}

int main()
{
    char str[50];
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    
    //int n=atoi(str);
    int n=my_atoi(str);
    
    printf("%d",n);
}
