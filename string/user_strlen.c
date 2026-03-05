#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char *s1)
{
    int cou=0;
    /*while(s1[cou])
    {
        cou++;
    }
    */
    while(*s1)
    {
        cou++;
        s1++;
    }
    return cou;
}
int main()
{
    char s1[50]="vector india";
    
    int n=my_strlen(s1);
   
   printf("lenght: %d",n);
    
    
}
