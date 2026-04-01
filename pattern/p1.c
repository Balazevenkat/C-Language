#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cnt=1;
    for(int i=3;i>0;i--,printf("\n"))
    {
        for(int j=0;j<i;j++)
        printf(" ");
        
        for(int k=0;k<cnt;k++)
        printf("* ");
        
        cnt++;
    }
}
