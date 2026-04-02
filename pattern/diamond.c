#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cnt=0;
    for(int i=0;i<4;i++,printf("\n"))
    {
        for(int j=4;j>=cnt;j--)
        printf(" ");
        
       for(int q=0;q<cnt+1;q++)
        printf("* ");
        cnt++;
    }
    
    for(int i=0;i<4;i++,printf("\n") )
    {
        printf("   ");
        for(int j=0;j<i;j++)
        printf(" ");
        
        for(int k=3;k>i;k--)
        printf("* ");
    }
}
