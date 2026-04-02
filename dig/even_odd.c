#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=n;
    while(n)
    {
        if(((n%10)%2)!=0)
        printf("%d ",(n%10));
        
        n/=10;
    }
    printf("\n");
    while(num)
    {
        if(((num%100)%2) == 0 )
        printf("%d ",(num%100));
        
        num/=100;
    }
    
    
}
