#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void remove_dup(char *str)
{
    int flag;
    while(*str)
    {
        flag=0;
        char *ptr=str+1;
        while(*ptr)
        {
            if(*str==*ptr)
            {
            memmove(ptr,ptr+1,strlen(ptr+1)+1);
            ptr--;
            flag=1;
            }
            ptr++;
        }
        
        if(flag)
        {
             memmove(str,str+1,strlen(str+1)+1);
             str--;
        }
        
        str++;
    }
}


/*void remove_dup(char*str)
{
    int flag;
    for(int i=0;str[i];i++)
    {
        flag=0;
        for(int j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {
                memmove(&str[j],&str[j+1],strlen(&str[j+1])+1);
                j--;
                flag=1;
            }
        }
        if(flag)
        {
        memmove(&str[i],&str[i+1],strlen(&str[i+1])+1);
        i--;
        }
    }
}*/

int main()
{
    int n;
    scanf("%d",&n);
    
    char *str=malloc(n);
    getchar();
    fgets(str,n,stdin);
    str[strlen(str)-1]='\0';
    
    remove_dup(str);
    
    
    puts(str);
}
