#include<stdlib.h>
#include<stdio.h>
int main()
{
    int arr[5]={1,4,3,5,2};
    
    for(int i=5-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]^=arr[j+1]^=arr[j]^=arr[j+1];
            }
        }
    }
    
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
}
