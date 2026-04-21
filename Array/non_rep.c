#include<stdio.h>
#include<stdlib.h>

void non_elem(int arr[],int n)
{
    int cnt,flag;
  
  //2 2 2 3 4 5 2 5 6 2
     for(int i=0;i<n;i++)
     {
         cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        if(cnt==1)
        printf("%d ",arr[i]);
     }
    
}

int main()
{
    int *arr=NULL;
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid size");
        return 0;
    }
    if(n>50)
    {
        printf("Memory Overflow");
        return 0;
    }
    arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    non_elem(arr,n);
}
