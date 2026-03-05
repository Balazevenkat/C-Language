#include<stdio.h>
int main()
{
    int num,tem,res=0,base=1;
    scanf("%d",&num);
    
    while(num)
    {
        tem=num%10;
        if(tem==0 || tem==1)
        {res+=base*tem;
        base*=2;
        }
        else
        break;
        
        num/=10;
    }
    printf("res: %d",res);
    
}
