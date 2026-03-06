#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int is_palindrome(char *ptr)
{
    char *left=ptr;
    
    char *rig=ptr+strlen(ptr)-1;
    
    while(left<rig)// == positiom in middle
    {
        if(*left != *rig)
        return 0;
        
        left++;
        rig--;
    }
    
    return 1;
}
/*
int is_palindrome(char *str)
{
    int lef=0,rig=strlen(str)-1;
    
    while(lef<rig)
    {
        if(str[lef]!=str[rig])
        return 0;
        
        lef++;
        rig--;
    }
    
    return 1;
}
*/
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    
    if(is_palindrome(str))
    printf("\npalindrome");
    else
    printf("\n not palindrome");
    
    return 0;
}
