#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int flag;
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    for(int i=0;str[i];i++)
    {
        for(int j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {
                memmove(&str[j],&str[j+1],strlen(&str[j+1])+1);
                j--;
                flag=1;
            }
        }
    }
    if(flag!=1)
    {
        printf("No duplicates");
    }
    else
    puts(str);
}
