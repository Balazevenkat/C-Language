#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strcpy(char*des,char*src)
{
    while(*src)
    {
        *des=*src;
        src++;
        des++;
    }
    *des='\0';
    
    
}

int main()
{
    char src[100];
    fgets(src,100,stdin);
    src[strlen(src)-1]='\0';
    
    char des[100];
    
    //strcpy(des,src);
    my_strcpy(des,src);
    
    puts(des);
}
