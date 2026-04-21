#include<stdio.h>
#include<stdlib.h>

void freq_cnt_rep(int arr[],int n)
{
    int cnt,flag;
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
        printf("%d times:%d ,",arr[i],cnt);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    freq_cnt_rep(arr,n);
    
}
