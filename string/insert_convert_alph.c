#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void conver_char(char *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ptr[i]>='A' && ptr[i]<='Z')
        ptr[i]+=32;
        else if(ptr[i]>='a' && ptr[i]<='z')
        ptr[i]-=32;
    }
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char s1[10];
    fgets(s1,10,stdin);
    s1[strlen(s1)-1]='\0';
    
    char *ptr=str;
    
    while(ptr=strstr(ptr,s1))
    {
        conver_char(ptr,strlen(s1));
        
        ptr++;
    }
    
    puts(str);
}
