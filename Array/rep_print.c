#include<stdio.h>
#include<stdlib.h>


void rep_elem_print(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        if(cnt>1)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}

void rep_elem_cnt(int arr[],int n)
{
    int cnt,flag;
    
    for(int i=0;i<n;i++)
    {
        cnt=0,flag=1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
            
        }
        
        for(int k=0;k<i;k++)
        {
            if(arr[k]==arr[i])
            flag=0;
        }
        
        if(flag && cnt>1)
        printf("%d time:%d ",arr[i],cnt);
        
    }
}


int main()
{
    int n,*arr;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    
    rep_elem_print(arr,n);
    
    rep_elem_cnt(arr,n);
}
