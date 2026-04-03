#include<stdio.h>
#include<stdlib.h>

int is_prime(int n)
{
    if(n==0 || n==1)
    return 0;
    
    if(n==2)
    return 1;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        return 0;
        
    }
    
    return 1;
}

int main()
{
    int max=50,min=0;
    
    for(int min=0;min<max;min++)
    {
        if(is_prime(min))
        {
            printf("%d ",min);
        }
    }
}
