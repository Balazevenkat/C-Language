#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

void revers_sub(char *str,int n)
{
    char *lef=str; char*rig=str+(n-1);
    
    while(lef<rig)
    {
        if(*lef!=*rig)
        *lef^=*rig^=*lef^=*rig;
        
        lef++;
        rig--;
    }
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char sub[10];
    fgets(sub,10,stdin);
    sub[strlen(sub)-1]='\0';
    
    char *ptr=str;
    
    while(ptr=strstr(ptr,sub))
    {
        revers_sub(ptr,strlen(sub));
        
        ptr++;
    }
    
    puts(str);
    
}
