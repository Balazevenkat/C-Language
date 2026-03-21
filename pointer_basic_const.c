#include<stdio.h>
#include<stdlib.h>

int main()
{
    //const int *p=20; error can't assign
    int b=20;
    const int *p=&b;
    
   //*p=b;//can't allowed to change data
    
    printf("%d",*p);
}
