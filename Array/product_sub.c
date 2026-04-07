#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check_sub_prod(int *arr,int n)
{
    int pro=1;
    for(int i=0;i<n;i++)
    pro*=arr[i];
    
    return pro;
}

int main()
{
    //int n;
    //scanf("%d",&n);
    
    int sub=3;
    
    int arr[5];
    
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    
    printf("\n");
    int res=0,j;
    for(int i=0;i<=5-sub;i++)
    {
        int tem=check_sub_prod(arr+i,sub);
        if(res<tem)
        {
            res=tem;
            j=i;
        }
    }
    
    printf("\n product:%d\n",res);
    
    printf("[");
    for(int i=j;i<5;i++)
    printf("%d, ",arr[i]);
    
    printf("]");
    
}
