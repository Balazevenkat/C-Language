#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//swap nibble
int main()
{
    unsigned char num=0x45;
    printf("befor swap:0X%x\n",num);
    
    num= (num>>4)|(num<<4);
    
    printf("after nibble swap:0X%x\n",num);
    
}
