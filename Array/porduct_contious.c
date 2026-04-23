#include<stdio.h>
#include<stdlib.h>

int sub_cont(int *arr)
{
    int pro=1;
    for(int i=0;i<2;i++)
    {
        pro*=arr[i];
    }
    
    return pro;
}



int main()
{
    int n;
    scanf("%d",&n);
    int *arr=NULL;
    
    arr=(int*)calloc(n,sizeof(int));
    
   
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int max=0,res,k;
    for(int i=0;i<=n-2;i++)
     {res=sub_cont(arr+i);
    if(res>max)
    {
    max=res;
    k=i;
    }
    
     }
    
    printf("\n");
    for(int i=k;i<k+2;i++)
    {
        printf("%d ",arr[i]);
    }
    
    free(arr);
    
}
