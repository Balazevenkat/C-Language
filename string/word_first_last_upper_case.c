#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void word_cap(char*w,int n)
{
    int flag=1;
    if(*w>='a' && *w<='z')
    {*w-=32; flag=0;}
    else if(*w>='A' && *w<='Z')
    {
        flag=0;
    }
    
    if(flag)
    {
        printf("invalid");
        exit(0);
    }
    flag=1;
     n= n-1;
    
    if(*(w+n)>='a' && *(w+n)<='z')
    {*(w+n)-=32; flag=0;}
    else if(*(w+n)>='A' && *(w+n)<='Z')
    {
        flag=0;
    }
    
    if(flag)
    {
        printf("invalid");
        exit(0);
    }
    
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char *ptr=str;
    
    int flag=0;
    while(*ptr)
    {
        if((*ptr>='1' && *ptr<='9'))//(!((*ptr>='a' && *ptr<='z') || (*ptr>='A' && *ptr<='Z') || (*ptr==' ')))
        {
        printf("ERROR");
        return 0;
        }
        
        ptr++;
    }
    
    
    
    ptr=strtok(str," ");
    
    char *word[50];
    int cnt=0;
    while(ptr)
    {
        int len=strlen(ptr);
        word_cap(ptr,len);
        word[cnt++]=ptr;
        ptr=strtok(NULL," ");
    }
    
    for(int i=0;i<cnt;i++)
    {
        printf("%s%s",word[i],(i== cnt-1?"":" "));
    }
    
    //puts(str);
}
