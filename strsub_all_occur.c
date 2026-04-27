 check for    hii all how are you sub: hi

   were in while ptr+=strlen(sub);//correct approch



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int found=0;
void revers_sub(char *str,int n)
{
    char*lef=str,*rig=str+n-1;
    
    while(lef<rig)
    {
        if(*lef!=*rig)
        *lef^=*rig^=*lef^=*rig;
        
        lef++;
        rig--;
    }
    found=1;
    
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char sub[20];
    fgets(sub,20,stdin);
    sub[strlen(sub)-1]='\0';
    
    char *ptr=str;
    
    while(ptr=strstr(ptr,sub))
    {
        revers_sub(ptr,strlen(sub));
        ptr+=strlen(sub);
    }
    
    if(found)
    puts(str);
    else
    printf("not found");
}
