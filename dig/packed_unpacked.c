#include<stdio.h>
#include<stdlib.h>

//data packed

int main()
{
    unsigned char byte=0;
    int arr[]={0,0,0,0,1,0,1,0};
    
    for(int i=0;i<8;i++)
    {
        byte|=(arr[i]&1)<<(7-i);
    }
    
    printf("0X%02X\n",byte);
}



int main()
{
    unsigned char byte=0x0A;
    
    int arr[8];
    
    for(int i=0;i<8;i++)
    {
        arr[i]=byte>>(7-i) &1;
        printf("%d ",arr[i]);
    }
}
