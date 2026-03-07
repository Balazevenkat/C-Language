#include<stdio.h>

int main()
{
    
    //char -->nibble   4
    
    unsigned char num=0xAB;
    num=(num>>4)|(num<<4);
    
    printf("0x%x  ",num);
    
    
    
    //short ---->byte swap  8
    unsigned short num1=0x1234;
    
    num1=(num1>>8)|(num1<<8);
    
    printf("0x%x  ",num1);
    
    
    //int --->word swap   8
    unsigned int num2=0x12345678;
    
    num2=(num2>>16)|(num2<<16);
    
    printf(" 0x%x",num2);
}
