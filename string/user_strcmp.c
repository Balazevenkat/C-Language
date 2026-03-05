/*👉 By default, all global variables in C have extern (external linkage)
UNLESS they are declared with static.

One-line rule (remember this):

Global variable = extern by default
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strcmp(char *p1,char *p2)
{
    
    while(*p1!='\0'  && *p1!='\0')
    {
        if(*p1!=*p2)
        return(p1 - p2);
        
        p1++;
        p2++;
    }
    
    return 0;
}
int main()
{
    char s1[50];
    fgets(s1,50,stdin);
    s1[strlen(s1)-1]='\0';
    
    char s2[50];
    fgets(s2,50,stdin);
    s2[strlen(s2)-1]='\0';
    
    if(my_strcmp(s1,s2))
    {
        printf("\nnot same");
    }
    else{
        printf("same");
    }
    
    
}
