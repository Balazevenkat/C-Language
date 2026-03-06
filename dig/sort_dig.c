#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int prev,cur,asc=1,des=1;
    prev=n%10;
    n=n/10;
    
    while(n)
    {
        cur=n%10;
        if(cur>prev)
        asc=0;
        
        if(prev>cur)
        des=0;
        
        prev=cur;
        n/=10;
    }
    
    if(asc==1 || des==1)
    printf("sorted");
    
    else
    printf("not sorted");
    
    return 0;
}
