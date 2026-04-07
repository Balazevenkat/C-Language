#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int n=0x12345678;
    
    unsigned int res=(n&(0xffffff00));
    unsigned int num=(char)(n&(0x000000ff));
    num=(num>>4)|(num<<4) & 0xFF;
    printf("0x%x\n",res);
   num|=res;
    printf("0X%x",num);
}
0x12345600
0X12345687
