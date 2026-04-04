#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_vowel(char c)
{
    switch(c)
    {
        case'a':return 1;
        case 'i':return 1;
        case 'e':return 1;
        case 'o':return 1;
        case 'u':return 1;
        default:break;
    }
    return 0;
}

int check_vowel(char*ptr)
{
   if(is_vowel(ptr[0]) && is_vowel(ptr[strlen(ptr)-1]))
   return 1;
   else if(strlen(ptr)==1 && is_vowel(ptr[0]))
   return 1;
   else
   return 0;
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char *ptr=NULL;
    ptr=strtok(str," ");
    int cnt=0;
    while(ptr)
    {
        if(check_vowel(ptr))
        printf("%s ",ptr);
        
        cnt++;
        
        ptr=strtok(NULL," ");
    }
    
    printf("%d",cnt);
}
