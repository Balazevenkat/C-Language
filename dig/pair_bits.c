#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
    printf("supplied zero");
    return 0;
    }
    int cnt=0;
    for(int i=31;i>=0;i--)
    {
        if(((n>>i)&1)==1 && ((n>>(i-1))&1)==1)
        cnt++;
    }
    if(cnt)
    printf("%d",cnt/2);
    else
    printf("no pair of set bits");
}
