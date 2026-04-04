#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

/**************** pointer increment must ****************/

void check_rep(char*ptr,char c)
{
/*    int cnt=0;
    while(*ptr)
    {
        if(*ptr==c)
        cnt++;
        
        ptr++;
    }*/
  int cnt=0;
  while(ptr=strchr(ptr,c))
  {
      cnt++;
      
      ptr++;
  }
    printf("%d",cnt);
}

int main()
{
    int n=100;
    char *str=(char*)malloc(n);
    
    fgets(str,n,stdin);
    str[strlen(str)-1]='\0';
    
    char*ptr=str;
    
    char c;
    scanf("%c",&c);
    
    check_rep(ptr,c);
}
