#include <stdio.h>

int main()
{
    int n,i,cnt=0,pos;
    scanf("%d",&n);
    
    for(i=31;i>=0;i--)
    {
        if((n>>i)&1)
        {cnt++;
        pos=i;}
    }
    
/*------------   Power of 2ⁿ → position % n == 0  ---------*/
    
    if(cnt==1)
    printf("%d is pow of 2\n",n);
    else
    printf("%d is NOT pow of 2\n",n);
    
    if(cnt==1 && pos%2 == 0)
    printf("%d is pow of 4\n",n);
    else
    printf("%d is NOT pow of 4\n",n);
    
    if(cnt==1 && pos%3 == 0)
    printf("%d is pow of 8\n",n);
    else
    printf("%d is NOT pow of 8\n",n);
    
    
    
    
    
    /*printf("Enter the number(checks pow of 2,4,8,16): ");
    int num,base=1;
    scanf("%d",&num);
    
    while(base<=num)
    {
        if(num==base)
        {
            printf("%d its pow of %d\n",base,4);
            break;
        }
        else
        base*=4;//4,8,16 accordingly
    }
    
    if(base==num)
    printf("base:%d\n",base);
    else
    printf("%d not power of %d\n",num,4);*/
    
    
    return 0;
}
