
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sorted_string(char *str)
{
    int i,j;
    int n=strlen(str);
    char tem;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(str[j] > str[j+1])//str[i]
            {
                /*tem=str[j];
                str[j]=str[j+1];
                str[j+1]=tem;*/
                
                str[j] ^= str[j+1] ^= str[j] ^= str[j+1]; //correct
                 //str[j] ^= str[i] ^= str[j] ^= str[i];  //correct
            }
        }
    }
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    sorted_string(str);
    
    puts(str);
}
