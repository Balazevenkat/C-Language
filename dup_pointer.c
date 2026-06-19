#include<stdio.h>

#include<stdlib.h>
#include<string.h>

int main()
{
    int flag;
    char *str;
    str=(char*)malloc(100*sizeof(char));
    printf("Enter the string: ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    char *start=str;
    while(*start)
    {
        char *ptr=start+1;
        while(*ptr)
        {
            if(*start == *ptr){
            memmove(ptr,ptr+1,strlen(ptr+1)+1);
            --ptr;
            flag=1;
            }
            ptr++;
        }
        start++;
    }
    if(flag!=1)
    {
        printf("No duplicates");
    }
    else
    puts(str);
}
