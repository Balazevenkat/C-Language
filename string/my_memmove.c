#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *my_memmove(char *d,char *s,int n)
{
    int i=0;
    if(d < s)//forward copy
    {
        for(int i=0;i<n;i++)
        {
            d[i]=s[i];
        }
    }
    else //backword copy
    {
        for(int i=n-1;i>=0;i--)
        {
            d[i]=s[i];
        }
    }
}


int my_strlen(char *ptr)
{
    int cou=0;
    while(*ptr)
    {
        cou++;
        ptr++;
    }
    
    return cou;
}

int main()
{
    char str[50];
    
    printf("Enter string: ");
    fgets(str,50,stdin);
    
    str[my_strlen(str)-1]='\0';
    
    printf("%d",my_strlen(str));
    
    for(int i=0;str[i];i++)
    {
        printf("str[%d]=%c\n",i,str[i]);
        printf(" ");
    }
    
    puts(str);//this is india
    printf("\nafter user_define_memoving: \n");
    
    my_memmove(str,str+4,my_strlen(str)+1);
    puts(str);
}








