#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5,a=0,b=1,c;
    
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
