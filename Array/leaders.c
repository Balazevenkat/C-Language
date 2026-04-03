#include<stdio.h>

void check_leaders(int arr[],int n)
{
    int i,flag;
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<n;j++)
        { 
            if(arr[i]>arr[j])
            {
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        
        if(flag || i==(n-1))
        printf("%d ",arr[i]);
        
    }
}
int main()
{
    int arr[5];
    
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    
    printf("\n");
    check_leaders(arr,5);
}
