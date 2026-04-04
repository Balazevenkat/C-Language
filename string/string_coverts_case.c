#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main()
{
    char *str=NULL;
    int n=10;
    str=(char*)malloc(n*sizeof(char));
    printf("Enter the string: ");
    fgets(str,n,stdin);
    str[strlen(str)-1]='\0';
    
    char *s=str;
    while(*s)
    {
        if(*s>='a' && *s<='z')
           (*s)-=32;
        else if(*s>='A' && *s<='Z')
        (*s)+=32;
        
        s++;
    }
    
    puts(str);
}
