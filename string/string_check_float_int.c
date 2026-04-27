#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char*ptr=str;
    
    int flag=0,found=0;
    while(*ptr)
    {
        
        if(*ptr=='.' || (*ptr>='0' && *ptr<='9'))
        {
           if(*ptr=='.')
           {
                char*s=ptr+1;
            while(*s)
            {
                if(*s=='.')
                {
                    printf("invalid input");
                    return 0;
                }
                s++;
            }
           }
        }
        else
        {
        flag=1;
        break;
        }
        if(*ptr=='.')
        found=1;
        
        ptr++;
    }
    
    if(flag)
    {
        printf("invalid input");
        return 0;
    }
    
    if(found==0)
    printf("Integer number");
    else if(found==1)
    printf("Floating number");
    
}
