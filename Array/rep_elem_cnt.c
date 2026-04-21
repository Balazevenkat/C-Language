#include<stdio.h>
#include<stdlib.h>

void rep_elem(int arr[],int n)
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
         
         if(cnt>1)
         {
             flag=1;
             for(int k=0;k<i;k++)
             {
                 if(arr[k]==arr[i])
                 flag=0;
             }
             if(flag)
             printf("%d ",arr[i]);
         }
     }
    
}

int main()
{
    int *arr=NULL;
    int n=10;
    arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    rep_elem(arr,n);
}
