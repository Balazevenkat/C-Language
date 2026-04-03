#include<stdio.h>
#include<stdlib.h>



int main()
{
    int max=50,min=0;
    
    for(int min=2;min<max;min++)
    {
        int cnt=0;
        for(int i=1;i<=min;i++)
        {
            if((min%i)==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        printf("%d ",min);
    }
}
