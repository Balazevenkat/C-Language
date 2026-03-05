#include<stdio.h>
#include<string.h>
#include<unistd.h>

void my_strcat(char *des,char*src)
{
    while(*des)
    des++;
    
    while(*src)
    {
    *des=*src;
    des++;
    src++;
    }
}

int main()
{
    char des[50];
    fgets(des,50,stdin);
    des[strlen(des)-1]='\0';
    
    char src[50];
    fgets(src,50,stdin);
     src[strlen(src)-1]='\0';
     
     //strcat(des,src);
     
     my_strcat(des,src);
     
     puts(des);
    
}
