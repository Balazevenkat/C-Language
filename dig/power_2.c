#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("wrong input");
        return 0;
    }
    
    int cnt=0;
    for(int i=31;i>=0;i--)
    {
        if((n>>i)&1 == 1)
        cnt++;
        
    }
    if(cnt==1)
    printf("%d is power of 2",n);
    else
    printf("%d is not a power of 2",n);
    
    return 0;
}
