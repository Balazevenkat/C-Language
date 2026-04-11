#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check_pal(char*ptr,int n)
{
    int flag=0;
    char *str=ptr;
    while(*str)
    {
        if(*str=='?')
        *str='a';
        
        str++;
    }
    
      str=ptr;
     char *tem=ptr+strlen(ptr)-1;
     
     while(*str)
     {
         if(*str==*tem)
         flag=1;
         else
         flag=0;
         
         str++;
         tem--;
     }
     
     if(flag)
     return (26%n);
     else
     return 0;
    
}

int main()
{
    char str[100];
    int n;
    scanf("%d",&n);
    
    getchar();
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    int res=check_pal(str,n);
    
    printf("%d",res);
}
