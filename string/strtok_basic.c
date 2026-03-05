#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cou=0,len;
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char *ptr=NULL;
    ptr=strtok(str,","); //if ","(dlimter) finds return the word staring location 
    
    while(ptr)
    {
        cou++;
        len=strlen(ptr);
        printf("word:%d ,lenght:%d\n",cou,len);
        ptr=strtok(NULL,",");//moves a head
    }
    
}
