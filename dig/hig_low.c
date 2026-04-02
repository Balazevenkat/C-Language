#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h=0,l=9;
    while(n)
    {
        int tem=(n%10);
        if(h<tem)
        {
            h=tem;
        }
        if(l>tem)
        l=tem;
        
        n/=10;
    }
    printf("hig:%d low:%d",h,l);
}
