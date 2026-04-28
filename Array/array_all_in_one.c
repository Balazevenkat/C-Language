#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void check_rep(int arr[],int n)
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
        printf("%d ",arr[i]);
    }
}

void cnt_rep_elem(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
      int  cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        if(cnt>1)
        {
            int flag=1;
            for(int k=0;k<i;k++)
            {
                if(arr[k]==arr[i])
                flag=0;
            }
            if(flag)
            printf("%d times:%d ,",arr[i],cnt);
        }
    }
}

void check_non_rep(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        
        if(cnt==1)
        printf("%d ",arr[i]);
    }
}

void rem_rep_with_org_elemt(int arr[],int n)
{
    
   for(int i=0;i<n;i++)
   {
       int cnt=0;
       for(int j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
           cnt++;
       }
       
       if(cnt>1)
       {
           int val=arr[i];
           for(int j=0;j<n;j++)
           {
               
               if(arr[j]==val)
               {
                   for(int k=j;k<n-1;k++)
                   {arr[k]=arr[k+1];
                   }
                   n--;
                   j--;
               }
           }
           i--;
       }
   }
    printf("after removing repated elements\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
}

void rem_rep_only_elemt(int arr[],int n)
{
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

int main()
{
    int n;
    scanf("%d",&n);
    int *arr=NULL;
    
    arr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("\n");
    
    check_rep(arr,n);
    printf("\n");
    
    cnt_rep_elem(arr,n);
    printf("\n");
    
    check_non_rep(arr,n);
    printf("\n");
    
    int r;
    printf("enter 1 of rem_org_rep ,2 only_rep: ");
    scanf("%d",&r);
    if(r==1)
    rem_rep_with_org_elemt(arr,n);
    else
    rem_rep_only_elemt(arr,n);
}
