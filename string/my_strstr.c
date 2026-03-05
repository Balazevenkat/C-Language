#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* my_strstr(char*str,char*sub)
{
    int i,j=0,flag=1;
    
    /*for(i=0;str[i];i++)
    {
        if(str[i]==sub[j])
        {
            for(j=0;sub[j];j++)
            {
                if(str[i]!=sub[j])
                break;
            }
            
            return &str[i];
        }
    }*/
    char *ptr=str;
    while(*str)
    {
         ptr=str;   
        if(*ptr==*sub)
        {
            while(*sub)
            {
                if(*ptr!=*sub)
                {
                 flag=0;
                 break;
                }
                 
                 sub++;
                 ptr++;
            }
            if(flag)
            return str;
        }
        str++;
    }
    
    
    return NULL;
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char sub[50];
    fgets(sub,50,stdin);
    sub[strlen(sub)-1]='\0';
    
    char *ptr=str;
   // while(ptr=strstr(ptr,sub))
    while(ptr=my_strstr(ptr,sub))
    {
        memset(ptr,'*',strlen(sub));
    }
    
    puts(str);
}
