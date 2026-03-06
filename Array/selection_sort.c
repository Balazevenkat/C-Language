#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5]={8,5,2,9,1};//{7,4,2,9,1};
    
    for(int i=0;i<5-1;i++)
    {
        int min=i;//init assume index 0 
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min])
            min=j;//index update
        }
        
        if(min!=i)
        {
        int tem=arr[i];
        arr[i]=arr[min];
        arr[min]=tem;
        }
    }
    
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
}
