#include<stdio.h>
#include<string.h>
#include<unistd.h>

char*my_strstr(char*str,char*sub)
{
    char *ptr=NULL,*s=NULL;
    while(*str)
    {
        ptr=str;                             (need to assign other pointer)
    
        s=sub;
 while(*ptr && *sub && *ptr==*s)
        {
            if(*ptr!=*s)
            break;
            
            ptr++;
            s++;
        }
        if(*s=='\0')
        return str;
        
        str++;
    }
    
    return NULL;
}

void revers_sub(char *str,int len)
{
    char *lef,*rig,tem;
    lef=str;rig=str+len-1;
    
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            /*tem=*lef;
            *lef=*rig;
            *rig=tem;*/
            *lef^=*rig^=*lef^=*rig;
        }
        
        lef++;
        rig--;
    }
}


int main()
{
    int cou=1;
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char sub[30];
    fgets(sub,30,stdin);
    sub[strlen(sub)-1]='\0';
    
    int len=strlen(sub);
    char *ptr=NULL;
    ptr=str;
    while(ptr=my_strstr(ptr,sub))
    {
        if(cou%2!=0)
        revers_sub(ptr,len);
        
        cou++;
        ptr+=len;
    }
    
    puts(str);
}
