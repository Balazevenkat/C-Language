#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


int main()
{
    char str[100];
    
    int n;
    scanf("%d",&n);
    
    sprintf(str,"%d",n);
    
   puts(str);
}
