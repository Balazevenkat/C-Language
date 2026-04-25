#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("minus ");
        n = -n;
    }
    
    
    
    char*num[]={"zero ","one ","two ","three ","foure ","five ","six ","Seven ","eight ","nine "};
    
    int dig=n,res=0,cnt=0;
    while(dig)
    {
        int d=dig%10;
        res=(res*10)+d;
        if(res==0)
        cnt++;
        
        dig/=10;
    }
    printf("%d ",res);
   n=res;
    
    while(n)
    {
        int d=n%10;
        printf("%s",num[d]);
        n/=10;
    }
    
    for(int i=0;i<cnt;i++)
    printf("%s",num[0]);
}
