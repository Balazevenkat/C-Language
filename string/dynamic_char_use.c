#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *str=NULL;
    
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    str=(char*)malloc(size*sizeof(char));
    getchar();//clears buffer
    fgets(str,size,stdin);
    str[strlen(str)-1]='\0';
    
    char sub[]="abc";
    
    strncpy(&str[3],sub,2);
    
    puts(str);
}
