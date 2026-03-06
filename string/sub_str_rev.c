#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int my_strlen(char *ptr)
{
    int cout=0;
    while(*ptr)
    {
        cout++;
        ptr++;
    }
    return cout;
}

void revers_sub(char *ptr,int len)
{
    char*lef,*rig,tem;
    lef=ptr;
    
    rig=ptr+len-1;
    
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            tem= *lef;
            *lef= *rig;
            *rig=tem;
        }
        lef++;
        rig--;
    }
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[my_strlen(str)-1]='\0';
    
    char sub[30];
    fgets(sub,30,stdin);
    sub[my_strlen(sub)-1]='\0';
    
    int len=my_strlen(sub);
    char *ptr=str;//pointer to arry
    while(ptr=strstr(ptr,sub))
    {
       revers_sub(ptr,len); //---------------> were length passed so only sub changes
       ptr+=len;//pointer increment must
    }
    
    printf("\n changed string: ");
    puts(str);
}
