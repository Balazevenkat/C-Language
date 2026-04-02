#include<stdio.h>
#include<stdlib.h>

int main()
{
     int min, max,sum=0;
    scanf("%d %d", &min,&max);
    if (min < 0 || max < 0 || min > max){
        printf("invalid range");
    }
    else
    {
        while(min<max)
        {
            int tem=min;
            sum=0;
            do{
                sum+=(tem%10);
                tem/=10;
            }while(tem);
            
            if(sum==9)
            printf("%d ",min);
        
            min++;
        }
    }
}
