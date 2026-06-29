#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    
    char str[20];
    sprintf(str,"%d",n);
    
    printf("%s",str);
}

/_______________second type_____________________/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    
    int flag=0;
    if(n<0)
    {
    flag=1;
    n= -n;
    }
    char str[10];
    while(n)
    {
        int d=n%10;
        
        str[i++]=d+'0';
        
        n/=10;
    }
    
    if(flag)
    str[i++]='-';
    
    int l=i;
    
    for(int j=l-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
}
