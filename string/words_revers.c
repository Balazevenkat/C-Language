#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rev_str(char*ptr,char *lst)
{
     int len=strlen(ptr);
    
    char*lef=ptr,*rig=lst;
    
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            *lef^=*rig^=*lef^=*rig;
        }
        lef++;
        rig--;
    }
}

void revers_word(char*ptr)
{
    
    int len=strlen(ptr);
    
    char*lef=ptr,*rig=ptr+len-1;
    
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            *lef^=*rig^=*lef^=*rig;
        }
        lef++;
        rig--;
    }
    
    char *str=ptr;
    while(*str)
    {
        if(*str==' ')
        {
            rev_str(ptr,str-1);
            ptr=str+1;
        }
        str++;
    }
    
    rev_str(ptr,ptr+strlen(ptr)-1);
    
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    
    revers_word(str);
    
    puts(str);
}
