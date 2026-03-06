#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void revers(char *str)
{
    char *lef,*rig,tem;
    lef = str;
    rig = str+strlen(str)-1;
    
    while(lef<rig)
    {
        if(*lef != *rig)
        {
           /* tem = *lef;
            *lef = *rig;
            *rig = tem;*/
            *lef ^= *rig ^= *lef ^= *rig;
        }
        lef++;
        rig--;
    }
    
}
/*{
    int lef=0,rig=strlen(str)-1;
    char tem;
    for(lef=0;lef<rig;lef++,rig--)
    {
        if(str[lef]!=str[rig])
        {
            tem=str[lef];
            str[lef]=str[rig];
            str[rig]=tem;
        }
    }
}*/

void my_itoa(int num,char*str)
{
    char *ptr=str;
    int isneg=0;
    if(num<0)
    {
        isneg=1;
        num = -num;    //assigning the only number
    }
   while(num)
    {
        *ptr =(num%10)+'0';
        num/=10;
        ptr++;
    }
    if(isneg)
    {
    *ptr='-';
    ptr++;
    }
    
    *ptr ='\0';
    
    revers(str);
    
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    char str[10];
    
    my_itoa(n,str);
    
    printf("string: ");
    puts(str);
}
