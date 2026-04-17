1.) Check if the ith bit is set or not
2.) Set the ith bit of a number.
3.) clear the ith bit of a number.
4.) Remove the last set bit of a number.
5.) Find whether a number is even or odd
5.) Check if the number is a power of 2?
7.) Check if a number is a power of 4?
3.) Check if a number is a power of 8?
9.) Check if a number is a power of 16?


#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);//10
    printf("Enter thr ith bit: ");
    scanf("%d",&i);//2
    
    if((n>>i)&1 == 1)
    printf("set bit");
    else
    {
    printf("not set\n");
    n^=(1<<i);
    }
    
    printf("%d ",n);
    printf("setted the bit:%i ",i);
    
    char c;
    scanf(" %c",&c);
    
    if(c=='c')
    n&=~(1<<i);
    
    printf("%d cleard %d\n resetted\n",n,i);
    
    
    printf("remmoving the last set bit\n");
    
    int j,last;
    for(j=31;j>=0;j--)
    {
        if((n>>j)&1)
        last=j;
    }
    n&=~(1<<last);
    printf("last bit set is %d ,after remvoing data:%d\n",last,n);
    
    if(n&1)
    printf("odd\n");
    else
    printf("even\n");
    
    
    printf("Enter the number(checks pow of 2,4,8,16): ");
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
    printf("%d not power of %d\n",num,4);
    
    
    return 0;
}
