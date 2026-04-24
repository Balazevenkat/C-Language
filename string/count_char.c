#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char c;
    scanf("%c",&c);
    
    char*ptr=str;
    int cnt=0;
    while(*ptr)
    {
        if(*ptr==c)
        cnt++;
        
        ptr++;
    }
    if(cnt)
    printf("%d",cnt);
    else
    printf("not found");
}
