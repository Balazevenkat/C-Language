#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void swap(int n,int p1,int p2)
{   printf("Befor swap:%d\n",n); 
    int b1;
    b1=(n>>p1)&1;

        int b2;
        b2=(n>>p2)&1;
        
        if(b1!=b2)
        {
            n^=1<<p1;
            n^=1<<p2;
        }
    printf("After swap:%d",n);       
}


int main()
{
    int num;
    scanf("%d",&num);
    int p1,p2;
    printf("Enter the pos1:");
    scanf("%d",&p1);
    
    printf("Enter the pos2:");
    scanf("%d",&p2);
    
    swap(num,p1,p2);
    
    return 0;
}
