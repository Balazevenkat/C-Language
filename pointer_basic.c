#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *const p;
    
    *p=15;
    
    printf("%d\n",*p);
    
    int b=20;
    
   // *p=&b; address can't change error ........//const p
   *p=b;//allowed to change data
    
    printf("%d",*p);
}
