#include<stdio.h>
#include<stdlib.h>

void rem_dup(int arr[],int n)
{
    int flag;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n-1;k++)
                arr[k]=arr[k+1];
                j--;
                n--;
                
                flag=1;
            }
        }
        if(flag)
        {
            for(int k=i;k<n-1;k++)
                arr[k]=arr[k+1];
                i--;
                n--;
        }
    }
    
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}

int main()
{
    int n,*arr;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    rem_dup(arr,n);
    
}
