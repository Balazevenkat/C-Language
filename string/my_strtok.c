#include<string.h>
#include<stdio.h>
#include<stdlib.h>


char *my_strtok(char*str,char*del)
{
    static char*ptr;
    char *start;
    if(str)
    ptr=str;
    
    if(ptr==NULL)// first case falis
    return NULL;
    
    start=ptr;// like a head poniter
    
    while(*ptr)
    {
        if(*ptr==*del)
        {
            *ptr='\0';
            ptr++;               // after braking one word poniter moves a head to hold statically for the next itration
            return start; 
        }
        ptr++;
    }
    
    ptr=NULL;
    
    return start;
    
}

/*char*my_strtok(char*str,char*c)
{
    
    char*start=NULL;
    start=str;
    int flag=0;
    
    if(start==NULL)
    return NULL;
    
 static char *ptr=str;
    
    while(*ptr)
    {
        if(*ptr==*c)
        {
            *ptr='\0';
           // flag=1;
           
           // break;
           
           return start;
        }
        ptr++;
    }
    
    ptr=NULL;
    
    //if(flag)
    return start;
    
}*/

int main()
{
    int cou=0,len;
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char *ptr=NULL;
    ptr=my_strtok(str,",");
    
    while(ptr)
    {
        cou++;
        len=strlen(ptr);
        printf("word:%d ,lenght:%d\n",cou,len);
        ptr=my_strtok(NULL,",");
    }
    
}
