
#include<stdio.h>
void check_rep(int n,int d)
{
    int cnt=0;
    while(n)
    {
        if((n%10)==d)
        cnt++;
        
        n/=10;
    }
    if(cnt==1)
    printf("%d ",d);
}
int main()
{
    int num;
    scanf("%d",&num);
    int tem=num,d;
    
    while(tem)
    {
        d=tem%10;
        check_rep(num,d);
        tem/=10;
    }
}
