#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    if(n<0)
    {
     printf("minus ");
     n=  -(-n);
    }
    
    char *str[]={"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    
    int m=n;
    char buff[20];
    
    sprintf(buff,"%d",m);
    
    char *buf=buff;
    while(*buf)
    {
        if(*buf>='0' && *buf<='9')
        {int d=(*buf - 48);
        printf("%s",str[d]);}
        
       buf++;
    }
}
