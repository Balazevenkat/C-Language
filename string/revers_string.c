#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*void revers_string(char*str)
{
    int lef=0,rig=strlen(str)-1;
    char tem;
    while(lef<rig)
    {
        if(str[lef]!=str[rig])
        {
            tem=str[lef];
            str[lef]=str[rig];
            str[rig]=tem;
        }
        lef++;
        rig--;
    }
    
}*/

//using pointers

void revers_string(char*str)
{
    char*lef=str,*rig=str+strlen(str)-1;
    char tem;
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            tem=*lef;
            *lef=*rig;
            *rig=tem;
        }
        lef++;
        rig--;
    }
}

int main()
{
    char str[50];
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    
    revers_string(str);
    
    puts(str);
}
