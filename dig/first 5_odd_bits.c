#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
    printf("0");
    printf("\n supplied zero..");
    return 0;
    }
    for(int i=31;i>=0;i--)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==9)
        {
            n&=~(1<<i);
        }
    }
    
    printf("%d",n);
}
