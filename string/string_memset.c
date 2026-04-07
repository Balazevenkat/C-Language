#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check_vowel(char c)
{
    switch(c)
    {
        case 'a':return 1;
        case 'e':return 1;
        case 'i':return 1;
        case 'o':return 1;
        case 'u':return 1;
    }
    
    return 0;
}


int main()
{
    int n;
    scanf("%d",&n);
    
    getchar();
    char *str=NULL;
    str=(char*)malloc(n*sizeof(char));
    
    fgets(str,n,stdin);
    str[strlen(str)-1]='\0';
    
    char *ptr=str;
    int cnt=0;
    while(*ptr)
    {
        if(check_vowel(*ptr))
        {
            cnt++;
            if((cnt%2) != 0)
            {
             memset(ptr,'#',1);   
            }
        }
        ptr++;
    }
    
    puts(str);
}
