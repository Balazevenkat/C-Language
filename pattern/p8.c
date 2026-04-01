#include<stdio.h>
#include<stdlib.h>

int main()
{
    for(int i=0;i<5;i++,printf("\n"))
    {
        for(int j=0;j<=i;j++)
        {
            if(((j+1)%2)==0)
            printf("0");
            else
            printf("1");
        }
    }
}

/*
1
10
101
1010
10101

*/
