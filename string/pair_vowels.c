#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_vowel(char *p)
{
    int cnt=0;
    if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
    {
        cnt++;
        if(*(p+1)=='a'||*(p+1)=='e'||*(p+1)=='i'||*(p+1)=='o'||*(p+1)=='u'||*(p+1)=='A'||*(p+1)=='E'||*(p+1)=='I'||*(p+1)=='O'||*(p+1)=='U')
        cnt++;
    }
    if(cnt==2)
    return 1;
    else
    return 0;
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char*ptr=str;
    int found=0;
    while(*ptr)
    {
        if(is_vowel(ptr))
        {
            *ptr='*';
            *(ptr+1)='*';
            found=1;
        }
        ptr++;
    }
    
    if(found)
    puts(str);
    else
    printf("there is no pair of vowels to hide");
    
}
