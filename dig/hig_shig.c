#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int h=0,sh=-1,tem;
    scanf("%d",&n);
    
    while(n)
    {
        tem=(n%10);
        if(h<tem)
        {
            sh=h;
            h=tem;
        }
        if(h>tem && tem>sh)
        {
            sh=tem;
        }
        
        n/=10;
    }
    
    printf("hig:%d shig:%d",h,sh);
}
