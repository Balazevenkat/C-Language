#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=1234;
    int hig=0,shig=-1;
    int n=num;
    while(n)
    {
        int d=n%10;
        if(hig<d)
        {
            shig=hig;
            hig=d;
        }
        
        if(hig>d && shig<d)
        {
            shig=d;
        }
        n/=10;
    }
    
    printf("%d ",shig);
    
    n=num;
    
    int les=9,slet=-1;
    while(n)
    {
        int d=n%10;
        
        if(les>d)
        {
            slet=les;
            les=d;
        }
        
        if(les>d && slet<d)
        slet=d;
        
        n/=10;
    }
    
    printf("%d ",slet);
}
