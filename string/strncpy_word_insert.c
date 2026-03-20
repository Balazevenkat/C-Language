#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    char *str1[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    char ptr[100];
    fgets(ptr,100,stdin);
    ptr[strlen(ptr)-1]='\0';
    for(int i=0;ptr[i];i++)
    {
        if(ptr[i]>='0' && ptr[i]<='9')
        {
            int d=ptr[i]-'0';
            int len=strlen(str1[d]);
            memmove(ptr+i+len,ptr+i+1,strlen(ptr+i+1)+1);//this 1 chair 
            strncpy(ptr+i,str1[d],len);
        }
    }
    
    puts(ptr);
}
