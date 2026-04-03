#include<stdio.h>
#include<stdlib.h>

void check_freq(int arr[],int num,int n)
{
    int cnt=0;
    
    for(int i=0;i<n;i++)
    {
    if(arr[i]==num)
    cnt++;
    }
    if(cnt==1)
    printf("%d",num);
    
    
}

int main()
{
    int n;
    int *arr=NULL;
    scanf("%d",&n);
    if(n<=100){
      arr=(int*)malloc(n*sizeof(int));
    }
    else
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    printf("\n");
    
    int cnt=0;
    static int tem;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        if(cnt==3)
        {
            if(tem<arr[i])
            tem=arr[i];
        }
    }
    
    printf("%d ",tem);
    
    for(int i=0;i<n;i++)
    {
        check_freq(&arr[0],arr[i],n);
    }
}
