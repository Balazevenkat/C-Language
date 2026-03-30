#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void sort_str(char *ptr)
{
    int n=strlen(ptr)-1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(*(ptr+j) < *(ptr+j+1))
            {
                *(ptr+j)^=*(ptr+j+1)^=*(ptr+j)^=*(ptr+j+1);
            }
        }
    }
    
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    puts(str);
    printf("\n");
    
    sort_str(str);
    
    puts(str);
}
