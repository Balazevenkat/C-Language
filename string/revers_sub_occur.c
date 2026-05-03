#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char *str,int n)
{
    char*lef=str,*rig=str+(n-1);
    
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
    
    char sub[20];
    fgets(sub,20,stdin);
    sub[strlen(sub)-1]='\0';
    
    int len=strlen(sub);
    char *ptr=str;
    int flag=1;
    while(ptr=strstr(ptr,sub))
    {
        flag=0;
        reverse(ptr,len);
        ptr+=(len);
    }
    
    if(flag)
    printf("not found");
    else
    puts(str);
    
    
}
