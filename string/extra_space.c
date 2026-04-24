#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void remov_space(char *ptr)
{
    char*str=ptr;
    
    for(int i=0;ptr[i];i++)
    {
        if(ptr[0]==' ')
        {
          memmove(&ptr[i],&ptr[i+1],strlen(&ptr[i+1])+1);
            i--;  
        }
        else if(ptr[i]==' ' && ptr[i+1]==' ')
        {
            memmove(&ptr[i],&ptr[i+1],strlen(&ptr[i+1])+1);
            i--;
        }
    }
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    remov_space(str);
    
    puts(str);
}


/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    char*ptr=str;

   
    while(*ptr)
    {
        if(*ptr==' ' && *(ptr+1)==' ')
        {memmove(ptr,ptr+1,strlen(ptr+1)+1);
        ptr--;
        }
        ptr++;
    }
    
    if(strlen(str)==1)
    {
    printf("empty string");
    return 0;
    }
    
    
    puts(str);
}*/
