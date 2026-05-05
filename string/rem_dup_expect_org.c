#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void rem_rep(char*str)
{
    while(*str)
    {
        char c= *str;
        char *ptr=str+1;
        while(*ptr)
        {
            if(*ptr==c)
            {
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                ptr--;
            }
            ptr++;
        }
        str++;
    }
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    rem_rep(str);
    
    puts(str);
}
