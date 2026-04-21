#include<stdio.h>
#include<stdlib.h>

void freq_cnt_rep(int arr[],int n)
{
    int cnt,flag,found=1;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        flag=1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        
        if(cnt>1)
        {
            for(int k=0;k<i;k++)
            if(arr[k]==arr[i])
            flag=0;
        }
        
        if(flag && cnt>1)
        {
        printf("%d ",arr[i]);
        found=0;
        }
    }
    if(found)
    printf("no repeated elements");
}

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n<=0)
    {
    printf("invalid size");
    
        return 0;
    }
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    
    freq_cnt_rep(arr,n);
    
}
