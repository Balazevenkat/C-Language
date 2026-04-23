#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *arr=NULL;
    
    arr=(int*)calloc(n,sizeof(int));
    
    arr=(int *)realloc(arr,2*sizeof(int));//extention for the cuuermt dynamic
    
    for(int i=0;i<n+2;i++)
    scanf("%d",&arr[i]);
    
    printf("\n");
    for(int i=0;i<n+2;i++)
    {
        printf("%d ",arr[i]);
    }
    
    free(arr);
    
}
