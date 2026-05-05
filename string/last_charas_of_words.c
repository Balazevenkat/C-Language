#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void rem_rep(char*str)
{
    while(*str)
    {
        char c= *str;
        char *ptr=str+1;
        while(*ptr)
        {
            if(*ptr==c)
            {
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                ptr--;
            }
            ptr++;
        }
        str++;
    }
}

void space_charas(char *str)
{
    
    int spa=0,cha=0;
    while(*str)
    {
        if(*str==' ')
        spa++;
        else
        cha++;
        
        str++;
    }
    
    printf("spaces: %d,characters:%d\n",spa,cha);
}

void fetch_last_char(char *str)
{
    while(*str!='\0')
    {
        str++;
    }
    
    if(*str=='\0')
    {
        if(*(str-1)>='a' && *(str-1)<='z' || *(str-1)>='A' && *(str-1)<='Z')
    printf("%c", *(str-1));
    }
}

void last_char_word(char*str)
{
    char *ptr=strtok(str," ");
    while(ptr)
    {
        fetch_last_char(ptr);
        ptr=strtok(NULL," ");
    }
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    //rem_rep(str);
    
    //space_charas(str);
   
    puts(str);
   
    last_char_word(str);
    
   
}
