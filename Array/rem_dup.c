#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n=10,flag;
    int arr[n];//{2,2,2,3,4,5,2,5,6,2};
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k=j;k<n-1;k++)
                    arr[k] = arr[k+1];
                n--;
                j--;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
