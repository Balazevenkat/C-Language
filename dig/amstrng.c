#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,num;
    
    scanf("%d",&num);//153
    n=num;
    int s=0;
    while(n)
    {
        int d=n%10;
        s+=d*d*d;
        
        n/=10;
    }
    
    if(s==num)
    printf("amsrtng");
    else
    printf("not amstrng");

}
