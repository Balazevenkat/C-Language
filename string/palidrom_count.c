#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static int cnt=0;
void palidrom_check(char *ptr)
{
    if(strlen(ptr)==1)
    cnt+=1;
    
   int flag=1;
    char*lef=ptr;char*rig=ptr+(strlen(ptr)-1);
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            flag=0;
        }
        //*lef^=*rig^=*lef^=*rig;
        
        lef++;
        rig--;
    }
    
    if(flag)
    cnt++;
   
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char*ptr=str;
    
    ptr=strtok(ptr," ");
    while(ptr)
    {
        //char *tem=ptr;
        
        palidrom_check(ptr);
        
        ptr=strtok(NULL," ");
    }
    
    printf("%d\n",cnt);
}
